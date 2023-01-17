/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:04:18 by songmengrui       #+#    #+#             */
/*   Updated: 2023/01/10 14:32:11 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_sign(int *n)
{
	if (*n < 0)
	{
		write(1, "-", 1);
		*n *= -1;
		return (1);
	}
	return (0);
}

int	ft_print_int(int n)
{
	char	print[1024];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	count += check_sign(&n);
	while (n >= 0)
	{
		print[i] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
		i++;
	}
	while (i >= 0)
	{
		write(1, &print[i], 1);
		count++;
		i--;
	}
	return (count);
}
