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

void	handle_result(char *result, char type, int *counter)
{
	if (type == 'p')
	{
		write(1, "0x", 2);
		*counter += 2;
	}
	write(1, result, ft_strlen(result));
	*counter += ft_strlen(result);
	if (type == 'x' || type == 'X' || type == 'i' || type == 's' || type == 'c')
    {
        free(result);
    }
}

void	get_arg(va_list args, manipulate_ft ft, char type, int *counter)
{
	void	*data;
	char	*result;

	data = all_data(args, type);
	if ((type == 'c' && *(char *)data == 0) || (type == 's' && data == NULL) || (type == 'p' && (data == NULL || data == 0)))
	{
		if (type == 'c')
			write_char(0, counter);
		else if (type == 's')
			write(1, "(null)", 6), *counter += 6;
		else if (type == 'p')
			write(1, "(nil)", 5), *counter += 5;
		free(data);
		return;
	}
	result = ft(data);
	handle_result(result, type, counter);
	if (type != 's' && type != 'p')
		free(data);
}

void	handle_format(char format, va_list list, int *counter)
{
	if (format == 'd' || format == 'i')
		get_arg(list, print_d, 'i', counter);
	else if (format == 's')
		get_arg(list, print_s, 's', counter);
	else if (format == 'c')
		get_arg(list, print_c, 'c', counter);
	else if (format == 'p')
		get_arg(list, print_p, 'p', counter);
	else if (format == 'u')
		get_arg(list, print_u, 'u', counter);
	else if (format == 'x')
		get_arg(list, print_x, 'x', counter);
	else if (format == 'X')
		get_arg(list, print_upx, 'X', counter);
}

int	ft_printf(const char *bau, ...)
{
	va_list	list;
	int		i;
	int counter;

	counter = 0;
	va_start (list, bau);
	i = 0;
	while (bau[i])
	{
		if (bau[i] != '%')
			write_char(bau[i++], &counter);
		else if (bau[i] == '%' && bau[i + 1] == '%')
		{
			print_percent(&counter);
			i += 2;
		}
		else
		{
			handle_format(bau[i + 1], list, &counter);
			i += 2;
		}
	}
	va_end(list);
	return (counter);
}
// #include <stdio.h>

// int main()
// {
// 	char *name = '\0';
// 	int grade = 10;
// 	char g = '\0';
// 	void	*p = NULL;
// 	unsigned int u = -1;
// 	ft_printf("String, interger and character -> ");
// 	ft_printf("Hello \x1b[32m%s\x1b[m, you got an \x1b[32m%d\x1b[m in your test! \x1b[32m%c%c\x1b[m\n", name, grade, 126 + 12, g);
// 	ft_printf("this is print_c: \x1b[32m%c\x1b[m\n", 0);
// 	ft_printf("this is print_p: \x1b[32m%p\x1b[m\n", p);
// 	ft_printf("this is print_u: \x1b[32m%u\x1b[m\n", u);
// 	ft_printf("this is print_x: \x1b[32m%x\x1b[m\n", u);
// 	ft_printf("this is print_upx: \x1b[32m%X\x1b[m\n", u);
// 	ft_printf("this a percent sign: \x1b[32m%%\x1b[m\n");

// 	printf("String, interger and character -> ");
// 	printf("Hello \x1b[32m%s\x1b[m, you got an \x1b[32m%d\x1b[m in your test! \x1b[32m%c%c\x1b[m\n", name, grade, 126 + 12, g);
// 	printf("this is print_c: \x1b[32m%c\x1b[m\n", 0);
// 	printf("this is print_p: \x1b[32m%p\x1b[m\n", p);
// 	printf("this is print_u: \x1b[32m%u\x1b[m\n", u);
// 	printf("this is print_x: \x1b[32m%x\x1b[m\n", u);
// 	printf("this is print_upx: \x1b[32m%X\x1b[m\n", u);
// 	printf("this a percent sign: \x1b[32m%%\x1b[m\n");

// 	ft_printf(" %c %c %c \n", '0', 0, '1');
// 	printf(" %c %c %c ", '0', 0, '1');

// 	return 0;
// }