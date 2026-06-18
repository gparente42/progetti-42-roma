/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <giparent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:24:33 by giparent          #+#    #+#             */
/*   Updated: 2026/06/04 15:21:49 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Come memcpy ma gestisce le sovrapposizioni di memoria, ritorna dst
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (!dst || !src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest < source)
	{
		while (n--)
			*dest++ = *source++;
	}
	else
	{
		dest += n;
		source += n;
		while (n--)
			*--dest = *--source;
	}
	return (dst);
}
