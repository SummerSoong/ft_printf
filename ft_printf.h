/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:11:44 by mesong            #+#    #+#             */
/*   Updated: 2023/01/10 21:15:24 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

# define LOWERCASE "0123456789abcdef"
# define UPPERCASE "0123456789ABCDEF"

int	ft_printf(const char *fmt, ...);
int	ft_hexconv(unsigned long long n, char *str);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_print_int(int n);
int	ft_print_u(unsigned int n);
int	check_mark(const char *fmt, va_list args);

#endif
