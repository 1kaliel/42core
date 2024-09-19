/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:36:24 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/04 19:57:36 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Converts a lowercase letter to its corresponding uppercase letter.
 *
 * This function takes a character as input and checks 
 * if it is a lowercase letter.
 * If it is, it converts it to its corresponding uppercase 
 * letter by subtracting 32 from its ASCII value.
 *
 * @param c The character to be converted.
 * @return The uppercase version of the input character 
 * 			if it is a lowercase letter, otherwise the input character itself.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
int main()
{

	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));


	return 0;
}*/
