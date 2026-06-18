/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:01:24 by giparent          #+#    #+#             */
/*   Updated: 2026/05/25 10:01:43 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converte l intero n in stringa allocata, gestisce negativi e INT_MIN
#include "libft.h"

static int	count_digits(long n)
{
	int	digits;

	if (n <= 0)
		digits = 1;
	else
		digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	fill_str(char *str, long nb, int digits)
{
	str[digits] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--digits] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;

	nb = (long)n;
	str = malloc(count_digits(nb) + 1);
	if (!str)
		return (NULL);
	fill_str(str, nb, count_digits(nb));
	return (str);
}
