/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:47:06 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/02 12:47:08 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * @param str The string to calculate the length of.
 * @return The length of the string.
 */
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* #include <stdio.h>

int main() {
	const char *str1 = "";
	int len1 = ft_strlen(str1);
	printf("Length of '%s' is %d\n", str1, len1);

	const char *str2 = "a";
	int len2 = ft_strlen(str2);
	printf("Length of '%s' is %d\n", str2, len2);

	const char *str3 = "Hello, world!";
	int len3 = ft_strlen(str3);
	printf("Length of '%s' is %d\n", str3, len3);

	const char *str4 = "   ";
	int len4 = ft_strlen(str4);
	printf("Length of '%s' is %d\n", str4, len4);

	const char *str5 = "!@#$%^&*()";
	int len5 = ft_strlen(str5);
	printf("Length of '%s' is %d\n", str5, len5);

	const char *str6 = "Hello\nWorld";
	int len6 = ft_strlen(str6);
	printf("Length of '%s' is %d\n", str6, len6);

	const char *str7 = "Hello\0World";
	int len7 = ft_strlen(str7);
	printf("Length of '%s' is %d\n", str7, len7);

	return 0;
}*/