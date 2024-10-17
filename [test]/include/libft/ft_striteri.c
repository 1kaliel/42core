/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:51:08 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 20:36:23 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Applies a function to each character of a string, along with its index.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * The function takes two parameters: the index of the character 
 * and a pointer to the character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void modify_char(unsigned int index, char *c) {
	(void)index;
	*c = ft_toupper(*c);
}

void print_result(char *s) {
    if (s)
        ft_putstr_fd(s, 1);
    else
        ft_putstr_fd("NULL", 1);
    ft_putchar_fd('\n', 1);
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "bro what";
    char str3[] = "";
    char str4[] = "i dont know what to write";

    ft_striteri(str1, modify_char);
    ft_putstr_fd("Test case 1: ", 1);
    print_result(str1);

    ft_striteri(str2, modify_char);
    ft_putstr_fd("Test case 2: ", 1);
    print_result(str2);

    ft_striteri(str3, modify_char);
    ft_putstr_fd("Test case 3: ", 1);
    print_result(str3);

    ft_striteri(str4, modify_char);
    ft_putstr_fd("Test case 4: ", 1);
    print_result(str4);

    ft_striteri(NULL, modify_char);
    ft_putstr_fd("Test case 5: NULL string handled\n", 1);

    ft_striteri(str1, NULL);
    ft_putstr_fd("Test case 6: NULL function handled\n", 1);

    return 0;
}*/
