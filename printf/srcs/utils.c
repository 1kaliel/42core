/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:58:09 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/20 15:58:12 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void write_char(char c, int *counter)
{
    write(1, &c, 1);
    (*counter)++;
}

void print_percent(int *counter)
{
    write(1, "%", 1);
    (*counter)++;
}
