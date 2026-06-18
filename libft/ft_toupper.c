/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:10:27 by giparent          #+#    #+#             */
/*   Updated: 2026/05/21 12:11:16 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converte c in maiuscolo se è minuscolo, altrimenti lo ritorna invariato
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
