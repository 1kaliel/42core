/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:46:12 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:46:13 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Fills a block of memory with a specified value.
 *
 * This function fills the first `n` bytes of the memory area pointed to by `str`
 * with the constant byte `c`.
 *
 * @param str Pointer to the memory area to be filled.
 * @param c   Value to be set. The value is passed as an `int`, but the function
 *            fills the block of memory using the `unsigned char` conversion of
 *            this value.
 * @param n   Number of bytes to be set to the value `c`.
 *
 * @return    Pointer to the memory area `str`.
 */
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;
	size_t			i;

	s = str;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s[i] = ch;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
    char str1[10] = "abcdefghi";
    ft_memset(str1, 'a', 9);
    printf("Test case 1: %s\n", str1);

    char str2[10] = "abcdefghi";
    ft_memset(str2, 'b', 0);
    printf("Test case 2: %s\n", str2);

    char str3[10] = "abcdefghi";
    ft_memset(str3, 0, 9);
    printf("Test case 3: ");
    for (int i = 0; i < 9; i++)
    {
        if (str3[i] == 0)
            printf("\\0");
        else
            printf("%c", str3[i]);
    }
    printf("\n");

    char str4[10] = "abcdefghi";
    ft_memset(str4, 'c', 5);
    printf("Test case 4: %s\n", str4);

    return 0;
}*/