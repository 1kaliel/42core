/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:27:18 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/19 04:27:21 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

//main
int		ft_printf(const char *bau, ...);

//types
char	*print_c(void *data);
char	*print_d(void *data);
char	*print_s(void *data);
char	*print_p(void *data);
char	*print_u(void *data);
char	*print_x(void *data);
char	*print_upx(void *data);
void 	write_char(char c, int *counter);
void 	print_percent(int *counter);


//utils
char	*ft_itoa_hex(unsigned long num, int up, char *buffer);
//typedef
typedef char*	(*manipulate_ft)(void*);

#endif