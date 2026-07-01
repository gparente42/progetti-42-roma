/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <giparent@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:57 by giparent          #+#    #+#             */
/*   Updated: 2026/06/16 15:08:23 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (print_str("(null)"));
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += print_char(str[i]);
		i++;
	}
	return (count);
}

int	print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += print_str("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += print_nbr(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_unsigned(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
