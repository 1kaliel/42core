/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:33:59 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:34:07 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Checks if a character is an alphabetic letter
 * 
 * @param c the character to check
 * @return 1 if c is an alphabetic letter, 0 otherwise
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main()
{
    char c1 = 'a';

    printf("ft_isalpha('%c') = %d\n", c1, ft_isalpha(c1));
    printf("ft_isalpha('%c') = %d\n", c1, isalpha(c1));

    return 0;
}*/