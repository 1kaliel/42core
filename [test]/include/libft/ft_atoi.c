/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:35:58 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 16:51:42 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed to by str
 * to int representation. It discards any whitespace characters until the first
 * non-whitespace character is found. Then, it takes an optional initial plus
 * or minus sign followed by as many numerical digits as possible, and
 * interprets them as a numerical value.
 *
 * @param str The string to be converted to an integer.
 * @return The integer value represented by the string, or 0 if the string
 *         is invalid.
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
int main()
{
    printf("Test 1: \"%s\" -> %d\n", "    -156", ft_atoi("    -156"));
    printf("Test 1: \"%s\" -> %d\n", "    -156", atoi("    -156"));
    return 0;
}*/