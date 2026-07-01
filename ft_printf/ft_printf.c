/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <giparent@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:45 by username          #+#    #+#             */
/*   Updated: 2026/06/18 13:37:39 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_hex(n / 16, base);
	count += print_char(base[n % 16]);
	return (count);
}

static int	print_ptr_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_ptr_hex(n / 16);
	count += print_char("0123456789abcdef"[n % 16]);
	return (count);
}

static int	print_ptr(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (print_str("(nil)"));
	count += print_str("0x");
	count += print_ptr_hex(n);
	return (count);
}

static int	handle_format(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == '%')
		return (print_char('%'));
	else if (c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (print_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (print_ptr(va_arg(args, unsigned long)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			count;
	va_list		args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format[i], args);
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
