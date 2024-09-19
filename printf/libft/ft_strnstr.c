/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:18:22 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 14:34:47 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated 
 *			string `to_find` in the string `str`,
 *        where not more than `nb` characters are searched.
 * 
 * @param str The string to search in.
 * @param to_find The string to find.
 * @param nb The maximum number of characters to search.
 * @return A pointer to the first occurrence of 
 *			`to_find` in `str`, or NULL if `to_find` is not found.
 */
char	*ft_strnstr(const char *str, const char *to_find, size_t nb)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (i < nb && str[i] != '\0')
	{
		x = 0;
		while (i + x < nb && str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
			if (to_find[x] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>

int main()
{
	const char *str1 = "Hello, world!";
	const char *to_find1 = "world";
	size_t nb1 = ft_strlen(str1);
	char *result1 = ft_strnstr(str1, to_find1, nb1);
	printf("Test case 1: %s\n", result1);

	const char *str2 = "Hello, world!";
	const char *to_find2 = "bau";
	size_t nb2 = ft_strlen(str2);
	char *result2 = ft_strnstr(str2, to_find2, nb2);
	printf("Test case 2: %s\n", result2);

	const char *str3 = "Hello, world!";
	const char *to_find3 = "";
	size_t nb3 = ft_strlen(str3);
	char *result3 = ft_strnstr(str3, to_find3, nb3);
	printf("Test case 3: %s\n", result3);

	return 0;
}*/