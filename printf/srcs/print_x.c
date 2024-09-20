/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:14:31 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 01:14:35 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*to_hex(void *data, int up)
{
	unsigned int	num;
	char			*buffer;
	char			*result;

	num = *(unsigned int *)data;
	buffer = malloc(17);
	if (!buffer)
		return (NULL);
	result = (ft_itoa_hex(num, up, buffer));
	return (result);
}

char	*print_x(void *data)
{
	char *hex_str;
	char *result;

	hex_str = to_hex(data, 0);
	if (hex_str)
	{
		result = ft_strdup(hex_str);
		//free(hex_str);
		return (result);
	}
	return (NULL);
}

char	*print_upx(void *data)
{
	char *hex_str;
	char *result;

	hex_str = to_hex(data, 1);
	if (hex_str)
	{
		result = ft_strdup(hex_str);
		//free(hex_str);
		return (result);
	}
	return (NULL);
}
