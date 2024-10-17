/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:46:57 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 13:18:52 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Copies a block of memory, allowing overlapping regions.
 *
 * This function copies the values of `n` bytes from the memory area 
 * pointed to by `src` to the memory area pointed to by `dest`.
 *
 * The memory areas may overlap: copying takes place as though the bytes in
 * `src` are first copied into a temporary array that does not overlap 
 * `src` or `dest`, and the bytes are then copied from the 
 * temporary array to `dest`.
 *
 * @param dest Pointer to the destination array where the 
 *              content is to be copied.
 * @param src Pointer to the source of data to be copied.
 * @param n Number of bytes to copy.
 * @return A pointer to the destination array `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/*#include <stdio.h>
void print_memory(const char *str, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%02x ", (unsigned char)str[i]);
    }
    printf("\n");
}

void test_memmove(void *dest, const void *src, size_t n, const char *test_name)
{
    char expected[20];
    ft_memcpy(expected, src, n);

    printf("Test: %s\n", test_name);
    printf("Before: ");
    print_memory(dest, n);
    ft_memmove(dest, src, n);
    printf("After:  ");
    print_memory(dest, n);
    printf("Expect: ");
    print_memory(expected, n);
	printf("Result: %s\n\n", (ft_memcmp(dest, expected, n) == 0) ? 
		   "PASS" : "FAIL");
}

int main()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Bruh, Moment!";
    test_memmove(str1, str2, 10, "Non-overlapping");

    char str3[20] = "Hello, World!";
    test_memmove(str3 + 1, str3, 10, "Overlapping (forward)");

    char str4[20] = "Hello, World!";
    test_memmove(str4, str4 + 1, 10, "Overlapping (backward)");

    char str5[20] = {0};
    test_memmove(str5, "Test", 5, "With null terminator");

    char str6[20] = "Hello, World!";
    test_memmove(str6, str6, 13, "Source and destination are the same");

    return 0;
}*/