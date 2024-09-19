/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:46:43 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:46:46 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Checks if the given character is printable.
 *
 * This function checks if the input character is a printable character, 
 *		including space.
 *
 * @param c The character to be checked.
 *
 * @return int Returns 1 if the character is printable, 0 otherwise.
 *
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main()
{
    char c1 = 126;

    printf("ft_isprint('%c') = %d\n", c1, ft_isprint(c1));
    printf("ft_isprint('%c') = %d\n", c1, isprint(c1));

    return 0;
}*/