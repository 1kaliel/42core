/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:46:32 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:46:36 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Checks if the given character is an ASCII character.
 *
 * This function checks if the input character is within 
 *		the ASCII character set (0 to 127).
 *
 * @param c The character to be checked.
 *
 * @return int Returns 1 if the character is an ASCII character, 0 otherwise.
 *
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main()
{
    int c1 = 127;

    printf("ft_isascii('%c') = %d\n", c1, ft_isascii(c1));
    printf("ft_isascii('%c') = %d\n", c1, isascii(c1));


    return 0;
}*/