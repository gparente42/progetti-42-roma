/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:44:23 by giparent          #+#    #+#             */
/*   Updated: 2026/05/21 11:49:29 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Appende src a dst, aggiunge terminatore, ritorna strlen(dst) + strlen(src)
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}
