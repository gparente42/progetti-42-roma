/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:16:40 by giparent          #+#    #+#             */
/*   Updated: 2026/05/18 14:17:38 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ritorna 1 se c è un carattere ASCII valido (0-127), 0 altrimenti
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
