/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:54:17 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 17:48:11 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Allocates memory for an array of num elements of size bytes each and 
 *			initializes all bytes in the allocated storage to zero.
 *
 * This function is similar to malloc but it also initializes 
 *	the allocated memory to zero.
 *
 * @param num Number of elements to allocate.
 * @param size Size of each element.
 *
 * @return void* Pointer to the allocated memory, or NULL if 
 *			the allocation fails.
 *
 */
void	*ft_calloc(size_t num, size_t size)
{
	size_t	total;
	size_t	i;
	void	*p;

	i = 0;
	total = num * size;
	if (num != 0 && total / num != size)
		return (NULL);
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	while (i < total)
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
/*int main()
{
    char *p = ft_calloc(10, 2);
    size_t i = 0;

    printf("Allocated memory contents:\n");
    while (i < 20)
    {
        printf("%d ", p[i]);
        i++;
    }
    printf("\n");

    if (p != NULL)
    {
        printf("Memory allocation successful.\n");
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    free(p);
    return 0;
}*/