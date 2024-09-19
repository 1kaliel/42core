/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:05:21 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/03 11:12:02 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * The ft_strchr() function locates the first occurrence of the character 'c'
 * (converted to a char) in the string 's'. The search includes 
 * the null-terminating
 * character. If the character is found, a pointer to the 
 * located character is returned.
 * If the character is not found, NULL is returned.
 *
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the located character, or NULL
 * if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* #include <stdio.h>

void print_result(char *result) {
	if (result)
		ft_putstr_fd(result, 1);
	else
		ft_putstr_fd("NULL", 1);
	ft_putchar_fd('\n', 1);
}

int main() {
	char str1[] = "ciao bello";
	char str2[] = "haha xd";
	char str3[] = "";
	char str4[] = "nada";

	print_result(ft_strchr(str1, 'o'));

	print_result(ft_strchr(str1, 'z'));

	print_result(ft_strchr(str3, 'a'));

	print_result(ft_strchr(str2, 'h'));

	print_result(ft_strchr(str2, 'd'));

	print_result(ft_strchr(str1, '\0'));

	print_result(ft_strchr(str1, 'l'));

	print_result(ft_strchr(str4, 'x'));

	return 0;
}*/
