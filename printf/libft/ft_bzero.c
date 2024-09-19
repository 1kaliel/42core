/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:45:29 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:45:34 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first n bytes of the area starting at s to zero 
 *		(bytes containing '\0').
 *
 * This function is typically used to zero out a block of memory.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to be set to zero.
 *
 * @return void
 *
 * @example
 * char str[10] = "abcdefghi";
 * ft_bzero(str, 2);
 * printf("%s\n", str); // Output will be "cdefghi"
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>
int main()
{
    char str[10] = "abcdefghi";
    
    printf("Before ft_bzero: %s\n", str);
    
    ft_bzero(str, 5);
    
    printf("After ft_bzero: %s\n", str);

	int i = 0;
	while (i < 10)
	{
		printf("str[%d] = %d\n", i, str[i]);
		i++;
	}
    
    return 0;
}*/