/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:51:04 by giparent          #+#    #+#             */
/*   Updated: 2026/05/25 11:59:04 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Scrive il numero n in formato stringa sul file descriptor fd
#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = (long)n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd((int)(nb / 10), fd);
	c = (nb % 10) + '0';
	write (fd, &c, 1);
}
