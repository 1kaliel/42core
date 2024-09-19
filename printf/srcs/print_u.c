/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:54:54 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 00:54:55 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_utoa(unsigned int num, char *buffer)
{
	int	i;

	i = 10;
	buffer[11] = '\0';
	if (num == 0)
	{
		buffer[i] = '0';
		return (&buffer[i]);
	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (&buffer[i + 1]);
}

char	*print_u(void *data)
{
	unsigned int	num;
	static char		buffer[12];

	num = *(unsigned int *)data;
	return (ft_utoa(num, buffer));
}
