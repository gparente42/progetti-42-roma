/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:37:27 by giparent          #+#    #+#             */
/*   Updated: 2026/06/04 12:15:57 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ritorna 1 se c è un carattere stampabile incluso
// lo spazio (32-126), 0 altrimenti
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
