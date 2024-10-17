/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:54:52 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 21:00:56 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Writes a string to the specified file descriptor.
 *
 * @param s The string to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*int main()
{
	ft_putstr_fd("Hello World\n", 1);
	ft_putstr_fd("ciao ciao2\n", 1);
	ft_putstr_fd("ciao3", 1);
	return 0;
}*/