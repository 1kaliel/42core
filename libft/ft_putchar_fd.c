/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:51:24 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 20:53:56 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to the specified file descriptor.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*int main()
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('c', 1);
	ft_putchar_fd('d', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('f', 1);
	ft_putchar_fd('g', 1);
	ft_putchar_fd('h', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('j', 1);
	return 0;
}*/