/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:46:44 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/05 17:16:26 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Trims the specified characters from the beginning and end of a string.
 *
 * This function takes a string `s1` and a set of characters 
 * `set` and removes any occurrences
 * of the characters in `set` from the beginning and end of 
 * `s1`. The resulting trimmed string
 * is returned.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed from `s1`.
 * @return A pointer to the trimmed string, or `NULL` if 
 * 			either `s1` or `set` is `NULL`, or if
 * memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ns;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	ns = (char *)malloc(len + 1);
	if (ns == NULL)
		return (NULL);
	ft_memcpy(ns, start, len);
	ns[len] = '\0';
	return (ns);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "   hello world   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("Test case 1: Trim characters from both ends\n");
	printf("Original string: \"%s\"\n", s1);
	printf("Set of characters to remove: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n\n", trimmed);
	free(trimmed);

	s1 = "   hello world";
	set = " ";
	trimmed = ft_strtrim(s1, set);
	printf("Test case 2: Trim characters from one end\n");
	printf("Original string: \"%s\"\n", s1);
	printf("Set of characters to remove: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n\n", trimmed);
	free(trimmed);

	s1 = "hello world";
	set = " ";
	trimmed = ft_strtrim(s1, set);
	printf("Test case 3: No characters to trim\n");
	printf("Original string: \"%s\"\n", s1);
	printf("Set of characters to remove: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n\n", trimmed);
	free(trimmed);

	s1 = "";
	set = " ";
	trimmed = ft_strtrim(s1, set);
	printf("Test case 4: Empty string\n");
	printf("Original string: \"%s\"\n", s1);
	printf("Set of characters to remove: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n\n", trimmed);
	free(trimmed);

	return 0;
}*/