/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songmengrui <songmengrui@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:04:19 by songmengrui       #+#    #+#             */
/*   Updated: 2023/01/16 22:40:31 by songmengrui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char *fmt, va_list args)
{
	if (*fmt == '%')
		return (ft_putchar('%'));
	else if (*fmt == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*fmt == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*fmt == 'd' || *fmt == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (*fmt == 'x')
		return (ft_hexconv(va_arg(args, unsigned int), LOWERCASE));
	else if (*fmt == 'X')
		return (ft_hexconv(va_arg(args, unsigned int), UPPERCASE));
	else if (*fmt == 'p')
	{
		ft_putstr("0x");
		return (ft_hexconv(va_arg(args, unsigned long long), LOWERCASE) + 2);
	}
	else if (*fmt == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	return (0);
}

int	ft_vprintf(const char *fmt, va_list args)
{
	int		state;
	int		count;

	count = 0;
	state = 0;
	while (*fmt)
	{
		if (state == 0)
		{
			if (*fmt == '%')
				state = 1;
			else
				count += ft_putchar(*fmt);
		}
		else
		{
			count += print_format(fmt, args);
			state = 0;
		}
		fmt++;
	}
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	int			count;
	va_list		args;

	va_start(args, fmt);
	count = ft_vprintf(fmt, args);
	va_end(args);
	return (count);
}

// int main()
// {
// // char *str = NULL;
// // printf("%d\n", printf("%s\n", str));
// // printf("count %d\t", ft_printf("Print:%c\n", 'H'));
// // printf("count %d\t", printf("Print:%c\n", 'H'));
// // printf("count %d \n",
// // ft_printf("Print a string: %s. Done\t", "Hello, 42"));
// // printf("count %d\n",
// // ft_printf("Print a string: %s. Done\t", "Hello, 42"));
// // // check empty string
// // printf("count %i\n",
// // ft_printf("Print a integar: %i %i %i %i. Done\t",
// // 20, 0, INT_MIN, INT_MAX));
// // printf("count %i\n",
// // printf("Print a integar: %i %i %i %i. Done\t", 20, 0, INT_MIN, INT_MAX));
// // printf("count %d\n",
// // ft_printf("Print a integar: %d %d %d %d. Done\t",
// // 20, 0, INT_MIN, INT_MAX));
// // printf("count %d\n",
// // printf("Print a integar: %d %d %d %d. Done\t", 20, 0, INT_MIN, INT_MAX));
// // ft_printf("Print a hex integar: %x. Done\n", 10);
// // printf("count %d\t",
// // ft_printf("Print a zero hex integar: %x. Done\n", 10));
// // printf("count %d\t", printf("Print a zero hex integar: %x. Done\n", 10));
// // int number = 42;
// // printf("42===========\n");
// // ft_printf("My Print a pointer: %p. Done\n", &number);
// // printf(":: Print a pointer: %p. Done\n", &number);
// // printf("h===========\n");
// // char mychar = 'c';
// // ft_printf("My Print a pointer: %p. Done\n", &mychar);
// // printf(":: Print a pointer: %p. Done\n", &mychar);
// // printf("hello===========\n");
// // char *string = "hello";
// // ft_printf("My Print a pointer: %p. Done\n", string);
// // printf(":: Print a pointer: %p. Done\n", string);
// // printf("count %d\n",
// // ft_printf("Print an unsigned int: %u. Done\t", UINT_MAX));
// // printf("count %d\n",
// // printf("Print an unsigned int: %u. Done\t", UINT_MAX));
// // 	printf("%d", ft_printf("%%%%%%%%%%%%%%%%"));
//   return 0;
// }
