/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:22:57 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 01:23:00 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*print_p(void *data)
{
	unsigned long	ptr;
	static char		buffer[17];

	ptr = (unsigned long)data;
	return (ft_itoa_hex(ptr, 0, buffer));
}
