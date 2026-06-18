/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:14:15 by giparent          #+#    #+#             */
/*   Updated: 2026/05/18 14:15:34 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ritorna 1 se c è una lettera O una cifra, 0 altrimenti
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
