/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:06:31 by songmengrui       #+#    #+#             */
/*   Updated: 2023/01/15 15:52:31 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_u(unsigned int n)
{
	char	print[1024];
	int		i;
	int		count;

	i = 0;
	count = 0;
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
