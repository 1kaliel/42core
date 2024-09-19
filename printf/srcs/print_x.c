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

	num = *(unsigned int *)data;
	buffer = malloc(17);
	if (!buffer)
		return (NULL);
	return (ft_itoa_hex(num, up, buffer));
}

char	*print_x(void *data)
{
	return (to_hex(data, 0));
}

char	*print_upx(void *data)
{
	return (to_hex(data, 1));
}
