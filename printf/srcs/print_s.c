/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 03:31:52 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 03:31:53 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*print_s(void *data)
{
	char	*str;
	char	*dup;

	str = (char *)data;
	dup = ft_strdup(str);
	if (!dup)
		return (NULL);
	return (dup);
}
