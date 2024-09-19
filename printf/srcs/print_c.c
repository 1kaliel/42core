/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 03:31:31 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 03:31:33 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*print_c(void *data)
{
	char	c;
	char	*str;

	str = malloc(2);
	c = *(char *)data;
	if (!str)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
