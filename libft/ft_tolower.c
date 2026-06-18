/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:15:31 by giparent          #+#    #+#             */
/*   Updated: 2026/05/21 12:16:19 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converte c in minuscolo se è maiuscolo, altrimenti lo ritorna invariato
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
