/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:46:23 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:46:25 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is an alphanumeric symbol
 * 
 * @param c the character to check
 * @return 1 if c is an alphanumeric symbol, 0 otherwise
 */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main()
{
    char c1 = 'd';

    printf("ft_isalnum('%c') = %d\n", c1, ft_isalnum(c1));
    printf("ft_isalnum('%c') = %d\n", c1, isalnum(c1));


    return 0;
}*/