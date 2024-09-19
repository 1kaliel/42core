/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:02:23 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 16:56:03 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Calculates the length of the number when converted to a string.
 *
 * This function determines the number of characters needed to 
 * represent the integer as a string, 
 * including the sign if the number is negative.
 *
 * @param n The integer whose length is to be calculated.
 *
 * @return int The length of the number as a string.
 */
static int	get_numl(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/**
 * @brief Converts an integer to a null-terminated string.
 *
 * This function allocates sufficient memory and converts the given 
 * integer to its string representation.
 *
 * @param n The integer to be converted.
 *
 * @return char* A pointer to the newly allocated string 
 *			representing the integer, or NULL if the allocation fails.
 *
 */

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = get_numl(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*int main()
{
    int n1 = 0;

    char *str1 = ft_itoa(n1);
    char *str1 = itoa(n1);


    printf("ft_itoa(%d) = %s\n", n1, str1);
    printf("itoa(%d) = %s\n", n1, str1);


    free(str1);

    return 0;
}*/