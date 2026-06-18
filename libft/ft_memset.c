/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 09:43:19 by giparent          #+#    #+#             */
/*   Updated: 2026/06/04 09:43:22 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Riempie i primi n byte di memoria puntata da s con il valore c, ritorna s
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*end;

	ptr = (unsigned char *)s;
	end = ptr + n;
	while (ptr < end)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}
