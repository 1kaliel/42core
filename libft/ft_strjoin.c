/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:22:43 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/14 17:00:30 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Concatenates two strings and returns the result.
 *
 * @param s1 The first string to be concatenated.
 * @param s2 The second string to be concatenated.
 * @return The concatenated string, or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ns;
	int		size;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	x = 0;
	ns = (char *)malloc(size +1);
	if (ns == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
		ns[i++] = s2[x++];
	return (ns[i] = '\0', ns);
}
/*void print_result(char *result) {
    if (result)
        ft_putstr_fd(result, 1);
    else
        ft_putstr_fd("NULL", 1);
    ft_putchar_fd('\n', 1);
}

int main() {
    char *s1;
    char *s2;
    char *result;

    s1 = "Hello";
    s2 = " World";
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 1: ", 1);
    print_result(result);
    free(result);

    s1 = "";
    s2 = "World";
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 2: ", 1);
    print_result(result);
    free(result);

    s1 = "";
    s2 = "";
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 3: ", 1);
    print_result(result);
    free(result);

    s1 = NULL;
    s2 = "World";
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 4: ", 1);
    print_result(result);
    free(result);

    s1 = NULL;
    s2 = NULL;
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 5: ", 1);
    print_result(result);
    free(result);

    s1 = "bruh why ppl be like that tho";
    s2 = " i cant even make a joke without someone getting offended";
    result = ft_strjoin(s1, s2);
    ft_putstr_fd("Test case 6: ", 1);
    print_result(result);
    free(result);

    return 0;
}*/
