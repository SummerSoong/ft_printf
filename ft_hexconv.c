/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:00:37 by songmengrui       #+#    #+#             */
/*   Updated: 2023/01/16 16:42:54 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexconv(unsigned long long n, char *str)
{
	char	print[1024];
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (n >= 0)
	{
		print[i] = str[n % 16];
		n /= 16;
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
