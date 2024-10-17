/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:47:39 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 14:52:54 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Concatenates two strings, ensuring that the resulting 
 * string is null-terminated.
 *
 * This function appends the contents of the source string 
 * `src` to the destination string `dest`,
 * up to a maximum of `size - 1` characters. The resulting 
 * string is always null-terminated.
 *
 * @param dest The destination string where the concatenated 
 *              string will be stored.
 * @param src The source string to be appended to the destination string.
 * @param size The total size of the destination buffer, 
 *              including the null-terminator.
 * 
 * @return The total length of the concatenated string.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ld;
	size_t	ls;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	ld = j;
	ls = ft_strlen(src);
	if (size == 0 || size <= ld)
		return (ls + size);
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ld + ls);
}

/* #include <stdio.h>

int main() {
    char dest1[20] = "Hello";
    char src1[] = " World!";
    size_t size1 = sizeof(dest1);
    size_t result1 = ft_strlcat(dest1, src1, size1);
    printf("Test case 1:\n");
    printf("Result: %s\n", dest1);
    printf("Expected: Hello World!\n");
    printf("Length: %zu\n", result1);
    printf("Expected length: 12\n\n");

    char dest2[10] = "Hello";
    char src2[] = " World!";
    size_t size2 = sizeof(dest2);
    size_t result2 = ft_strlcat(dest2, src2, size2);
    printf("Test case 2:\n");
    printf("Result: %s\n", dest2);
    printf("Expected: Hello Wor\n");
    printf("Length: %zu\n", result2);
    printf("Expected length: 12\n\n"); // Corrected expected length

    char dest3[10] = "Hello";
    char src3[] = "";
    size_t size3 = sizeof(dest3);
    size_t result3 = ft_strlcat(dest3, src3, size3);
    printf("Test case 3:\n");
    printf("Result: %s\n", dest3);
    printf("Expected: Hello\n");
    printf("Length: %zu\n", result3);
    printf("Expected length: 5\n\n");

    char dest4[10] = "";
    char src4[] = "";
    size_t size4 = sizeof(dest4);
    size_t result4 = ft_strlcat(dest4, src4, size4);
    printf("Test case 4:\n");
    printf("Result: %s\n", dest4);
    printf("Expected: \n");
    printf("Length: %zu\n", result4);
    printf("Expected length: 0\n\n");

    return 0;
}*/