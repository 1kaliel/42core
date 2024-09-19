/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:25:53 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 13:44:05 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Searches for the first occurrence of a byte in a block of memory.
 *
 * @param str The pointer to the block of memory to be searched.
 * @param c The value to be searched for, treated as an unsigned char.
 * @param n The number of bytes to be searched.
 * @return A pointer to the first occurrence of the byte if 
 *         found, or NULL if not found.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		ch;
	size_t				i;

	s = str;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (s[i] == ch)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char str[10] = "abcdefghi";
	char c = 'd';
	char *result = ft_memchr(str, c, 9);
	if (result)
	{
		printf("Character found at: %s\n", result);
	}
	else
	{
		printf("Character not found\n");
	}
	return 0;
}*/