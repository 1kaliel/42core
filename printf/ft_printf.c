/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:27:43 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/18 17:27:45 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/ft_printf.h"

void	*all_data(va_list args, char type)
{
	void	*data;

	data = NULL;
	if (type == 'i')
	{
		data = malloc(sizeof(int));
		if (data)
			*(int *) data = va_arg (args, int);
	}
	else if (type == 'c')
	{
		data = malloc(sizeof(char));
		if (data)
			*(char *)data = (char)va_arg(args, int);
	}
	else if (type == 's' || type == 'p')
		data = va_arg(args, void *);
	else if (type == 'u' || type == 'x' || type == 'X')
	{
		data = malloc(sizeof(unsigned int));
		if (data)
			*(unsigned int *) data = va_arg (args, unsigned int);
	}
	return (data);
}

void	handle_result(char *result, char type)
{
	write(1, result, ft_strlen(result));
	if (type != 'p' && type != 'u' && type != 'x' && type != 'X')
		free(result);
}

void	get_arg(va_list args, manipulate_ft ft, char type)
{
	void	*data;
	char	*result;

	data = all_data(args, type);
	if (!data)
		return ;
	result = ft(data);
	handle_result(result, type);
	if (type == 'i' || type == 'c' || type == 'u' || type == 'x' || type == 'X')
		free(data);
}

void	handle_format(char format, va_list list)
{
	if (format == 'd')
		get_arg(list, print_d, 'i');
	else if (format == 's')
		get_arg(list, print_s, 's');
	else if (format == 'c')
		get_arg(list, print_c, 'c');
	else if (format == 'p')
		get_arg(list, print_p, 'p');
	else if (format == 'u')
		get_arg(list, print_u, 'u');
	else if (format == 'x')
		get_arg(list, print_x, 'x');
	else if (format == 'X')
		get_arg(list, print_upx, 'X');
}

int	ft_printf(const char *bau, ...)
{
	va_list	list;
	int		i;

	va_start (list, bau);
	i = 0;
	while (bau[i])
	{
		if (bau[i] != '%')
		{
			write(1, &bau[i], 1);
			i++;
		}
		else if (bau[i] == '%' && bau[i + 1] == '%')
		{
			write(1, "%", 1);
			i += 2;
		}
		else
		{
			handle_format(bau[i + 1], list);
			i += 2;
		}
	}
	va_end(list);
	return (0);
}
#include <stdio.h>

int main()
{
	char name[] = "Kaliel";
	int grade = 10;
	char g = 'g';
	unsigned int u = 4294967295;
	ft_printf("String, interger and character -> ");
	ft_printf("Hello \x1b[32m%s\x1b[m, you got an \x1b[32m%d\x1b[m in your test! \x1b[32m%c%c\x1b[m\n", name, grade, g, g);
	ft_printf("this is print_p: \x1b[32m%p\x1b[m\n", name);
	ft_printf("this is print_u: \x1b[32m%u\x1b[m\n", u);
	ft_printf("this is print_x: \x1b[32m%x\x1b[m\n", u);
	ft_printf("this is print_upx: \x1b[32m%X\x1b[m\n", u);
	ft_printf("this a percent sign: \x1b[32m%%\x1b[m\n");

	printf("String, interger and character -> ");
	printf("Hello \x1b[32m%s\x1b[m, you got an \x1b[32m%d\x1b[m in your test! \x1b[32m%c%c\x1b[m\n", name, grade, g, g);
	printf("this is print_p: \x1b[32m%p\x1b[m\n", name);
	printf("this is print_u: \x1b[32m%u\x1b[m\n", u);
	printf("this is print_x: \x1b[32m%x\x1b[m\n", u);
	printf("this is print_upx: \x1b[32m%X\x1b[m\n", u);
	printf("this a percent sign: \x1b[32m%%\x1b[m\n");

	return 0;
}