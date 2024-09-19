/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:11:35 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 17:35:24 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Copies a string from source to destination with a specified maximum length.
 *
 * @param dest The destination string where the copied string will be stored.
 * @param src The source string to be copied.
 * @param n The maximum number of characters to be copied, including 
 *          the null terminator.
 * @return The total length of the source string.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}

/* #include <stdio.h>

int main() {
	char dest1[10];
	const char *src1 = "Hello, world!";
	size_t result1 = ft_strlcpy(dest1, src1, 0);
	printf("Test case 1: Length of source string: %zu\n", result1);

	char dest2[10];
	const char *src2 = "Hello, world!";
	size_t result2 = ft_strlcpy(dest2, src2, 5);
	printf("Test case 2: Length of source string: %zu\n", result2);

	char dest3[20];
	const char *src3 = "Hello, world!";
	size_t result3 = ft_strlcpy(dest3, src3, 15);
	printf("Test case 3: Length of source string: %zu\n", result3);

	return 0;
}*/