/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:57:28 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/04 19:58:11 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Converts an uppercase letter to lowercase.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the input character 
 * 			if it is an uppercase letter,
 *         otherwise the input character is returned unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
int main()
{

	printf("%c\n", ft_tolower('a'));
	printf("%c\n", tolower('a'));


	return 0;
}*/