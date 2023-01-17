/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:03:02 by songmengrui       #+#    #+#             */
/*   Updated: 2023/01/10 14:28:41 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	// if (str[0] == '\0')
	// {
	// 	write(1, "", 0);
	// 	return (0);
	// }
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
