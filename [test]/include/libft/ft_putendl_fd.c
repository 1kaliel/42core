/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:58:23 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 21:00:39 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Writes a string followed by a newline character to the
 * specified file descriptor.
 *
 * @param s The string to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*int main()
{
	ft_putendl_fd("Hello World", 1);
	ft_putendl_fd("ciao ciao2", 1);
	ft_putendl_fd("ciao3", 1);
	return 0;
}*/