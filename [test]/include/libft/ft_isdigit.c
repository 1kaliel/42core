/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:45:44 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:45:48 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Checks if the given character is a digit (0-9).
 *
 * This function checks if the input character is a numeric digit.
 *
 * @param c The character to be checked.
 *
 * @return int Returns 1 if the character is a digit, 0 otherwise.
 *
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int main()
{
    char c1 = '1';

    printf("ft_isdigit('%c') = %d\n", c1, ft_isdigit(c1));
    printf("ft_isdigit('%c') = %d\n", c1, isdigit(c1));


    return 0;
}*/