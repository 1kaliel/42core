/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:16:02 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/04 19:55:48 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Searches for the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the 
 * character 'to_find' in the string 'str'.
 * If the character is found, it returns a pointer 
 * to the last occurrence of the character in the string.
 * If the character is not found, it returns NULL.
 * If 'to_find' is the null character ('\0'), 
 * it returns a pointer to the null character at the end of the string.
 *
 * @param str The string to search in.
 * @param to_find The character to search for.
 * @return A pointer to the last occurrence of 'to_find' 
 *         in 'str', or NULL if not found.
 */
char	*ft_strrchr(char *str, char to_find)
{
	int	i;
	int	x;

	i = 0;
	x = -1;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
		{
			x = i;
		}
		i++;
	}
	if (to_find == '\0')
		return ((char *)(str + i));
	if (x != -1)
		return (str + x);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "Hello, World!";
	char to_find1 = 'o';
	char *result1 = ft_strrchr(str1, to_find1);
	char *expected1 = strrchr(str1, to_find1);
	printf("Test case 1: %s\n", result1 == expected1 ? "Passed" : "Failed");

	char str2[] = "Hello, World!";
	char to_find2 = 'z';
	char *result2 = ft_strrchr(str2, to_find2);
	char *expected2 = strrchr(str2, to_find2);
	printf("Test case 2: %s\n", result2 == expected2 ? "Passed" : "Failed");

	char str3[] = "Hello, World!";
	char to_find3 = '\0';
	char *result3 = ft_strrchr(str3, to_find3);
	char *expected3 = strrchr(str3, to_find3);
	printf("Test case 3: %s\n", result3 == expected3 ? "Passed" : "Failed");

	return 0;
}*/
