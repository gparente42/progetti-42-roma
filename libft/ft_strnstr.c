/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:44:11 by giparent          #+#    #+#             */
/*   Updated: 2026/05/21 12:54:27 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cerca little dentro big nei primi len byte, ritorna puntatore o NULL
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + nlen <= len)
	{
		if (ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
