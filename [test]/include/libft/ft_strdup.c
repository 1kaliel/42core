/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:56:48 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 18:15:07 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Duplicates a string.
 *
 * This function duplicates the given string `s` and returns a pointer 
 * to the newly allocated memory containing the duplicated string.
 *
 * @param s The string to be duplicated.
 * @return A pointer to the duplicated string, or `NULL` if the allocation fails.
 */
char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	i = 0;
	len = ft_strlen(s);
	dup = (char *)malloc(len +1);
	if (dup == NULL)
		return (NULL);
	while (i <= len)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
/* #include <stdio.h>

int main() {
    const char *s1 = "Hello, world!";
    char *sdup = ft_strdup(s1);
    
    if (sdup == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Original: %s\n", s1);
    printf("Duplicate: %s\n", sdup);
    free(sdup);
    
    return 0;
}*/