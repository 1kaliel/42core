/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:13:44 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 13:14:26 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Compare two strings up to a specified number of characters.
 *
 * The ft_strncmp() function compares the string pointed to by s1 to the string
 * pointed to by s2, up to the maximum of n characters. It returns an integer
 * less than, equal to, or greater than zero if s1 is found, respectively, to be
 * less than, to match, or be greater than s2.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/* #include <stdio.h>

int main() {
	char str1[] = "bau";
	char str2[] = "miau";
	int result = ft_strncmp(str1, str2, 3);
	printf("Test case 1: %d\n", result);

	char str3[] = "miau";
	char str4[] = "bau";
	result = ft_strncmp(str3, str4, 3);
	printf("Test case 2: %d\n", result);

	char str5[] = "bau";
	char str6[] = "bau";
	result = ft_strncmp(str5, str6, 5);
	printf("Test case 3: %d\n", result);

	char str7[] = "aaaa";
	char str8[] = "zzzz";
	result = ft_strncmp(str7, str8, 10);
	printf("Test case 4: %d\n", result);

	return 0;
}*/