/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:01:31 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 21:06:43 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Prints an integer to the specified file descriptor.
 *
 * This function prints the given integer `n` to the 
 * specified file descriptor `fd`.
 * If the integer is -2147483648, it prints the string "-2147483648" instead.
 * If the integer is negative, it prints a '-' character before the number.
 * The function recursively divides the number by 10 until it 
 * becomes less than 10,
 * and then prints each digit by converting it to a character 
 * using ASCII representation.
 *
 * @param n The integer to be printed.
 * @param fd The file descriptor to print the integer to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			n = n % 10;
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*int main()
{
	ft_putnbr_fd(1234567890, 1);
	printf("\n");
	ft_putnbr_fd(-1234567890, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	return 0;
}*/