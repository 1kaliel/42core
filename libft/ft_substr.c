/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:53:39 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/05 13:24:09 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Extracts a substring from a given string.
 *
 * This function extracts a substring from the input string 's', starting at the
 * specified index 'start' and with a maximum length of 'len' characters.
 *
 * @param s The input string from which to extract the substring.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 *
 * @return The extracted substring, or NULL if 's' is 
 *			NULL or if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	mxlen;
	char	*ns;
	size_t	i;
	size_t	x;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	mxlen = slen - start;
	if (start >= slen)
		return (ft_strdup(""));
	if (len > mxlen)
		len = mxlen;
	ns = (char *)malloc(len + 1);
	if (ns == NULL)
		return (NULL);
	i = start;
	x = 0;
	while (x < len && s[i] != '\0')
		ns[x++] = s[i++];
	ns[x] = '\0';
	return (ns);
}
/*
#include <stdio.h>

int main() {

	char *str1 = "Hello, World!";
	char *substr1 = ft_substr(str1, 7, 5);
	printf("Substring 1: %s\n", substr1);

	char *str2 = "Hello, World!";
	char *substr2 = ft_substr(str2, 0, 5);
	printf("Substring 2: %s\n", substr2);

	char *str3 = "Hello, World!";
	char *substr3 = ft_substr(str3, 7, 20);
	printf("Substring 3: %s\n", substr3);

	char *str4 = "Hello, World!";
	char *substr4 = ft_substr(str4, 20, 5);
	printf("Substring 4: %s\n", substr4);

	char *str5 = NULL;
	char *substr5 = ft_substr(str5, 0, 5);
	printf("Substring 5: %s\n", substr5);

	return 0;
}*/