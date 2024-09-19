/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:17:15 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 01:17:17 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
char	*ft_itoa_hex(unsigned long num, int up, char *buffer)
{
	char	*digits;
	int		i;

	if (up)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	i = 15;
	buffer[16] = '\0';
	if (num == 0)
	{
		buffer[i] = '0';
		return (&buffer[i]);
	}
	while (num > 0)
	{
		buffer[i--] = digits[num % 16];
		num /= 16;
	}
	return (&buffer[i + 1]);
}
