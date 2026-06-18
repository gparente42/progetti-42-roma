/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:41:29 by giparent          #+#    #+#             */
/*   Updated: 2026/05/25 14:43:07 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Elimina un singolo nodo chiamando del sul content, NON tocca i nodi collegati
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
