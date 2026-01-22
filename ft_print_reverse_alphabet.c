/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:57:08 by gparente          #+#    #+#             */
/*   Updated: 2026/01/19 16:14:44 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letterz;

	letterz = 'z';
	while (letterz >= 'a')
	{
		write(1, &letterz, 1);
		letterz --;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
