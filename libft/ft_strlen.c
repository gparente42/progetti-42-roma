/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:05:33 by giparent          #+#    #+#             */
/*   Updated: 2026/05/18 14:09:38 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ritorna la lunghezza della stringa s, senza contare il terminatore
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
