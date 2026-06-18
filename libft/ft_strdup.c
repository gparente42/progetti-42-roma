/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:41:45 by giparent          #+#    #+#             */
/*   Updated: 2026/05/21 13:45:48 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Duplica la stringa s allocando nuova memoria, ritorna puntatore o NULL
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
