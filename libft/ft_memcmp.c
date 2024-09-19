/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:59:58 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 14:10:32 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Compares the first n bytes of two memory areas.
 *
 * The ft_memcmp() function compares the first n bytes of the memory areas
 * pointed to by str1 and str2. It returns an integer less than, equal to, or
 * greater than zero if the first n bytes of str1 are found, respectively, to
 * be less than, to match, or be greater than the first n bytes of str2.
 *
 * @param str1 Pointer to the first memory area.
 * @param str2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n
 *         bytes of str1 are found, respectively, to be less than, to match, or
 *         be greater than the first n bytes of str2.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    char str1[10] = "abcdefghi";
    char str2[10] = "Abcdefghi";
    int result = ft_memcmp(str1, str2, 9);

    printf("Comparison result: %d\n", result);

    return 0;
}*/