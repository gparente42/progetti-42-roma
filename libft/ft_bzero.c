/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:30:42 by giparent          #+#    #+#             */
/*   Updated: 2026/05/18 15:48:26 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Azzera i primi n byte di memoria puntata da s
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*end;

	ptr = (unsigned char *)s;
	end = ptr + n;
	while (ptr < end)
	{
		*ptr = 0;
		ptr++;
	}
}
