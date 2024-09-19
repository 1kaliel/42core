/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:51:19 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 19:11:38 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Applies a function to each character of a string and creates a new string
 * with the results.
 *
 * @param s The input string to be mapped.
 * @param f The function to be applied to each character.
 * @return The new string created by applying the function to each character,
 *         or NULL if either the input string or the function is NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ns;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ns = (char *)malloc(len + 1);
	if (!ns)
		return (NULL);
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
/*  #include <stdio.h>

char test_to_upper(unsigned int i, char c)
{
    (void)i; // Mark 'i' as unused to suppress the warning
    return ft_toupper(c);
}

char *test_ft_strmapi()
{
    char *input = "Hello, World!";
    char *output = ft_strmapi(input, test_to_upper);
    return output;
}

int main()
{
    char *result = test_ft_strmapi();
    printf("Modified string: %s\n", result);
    free(result);
    return 0;
}*/