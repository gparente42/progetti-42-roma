/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:37:30 by gparente          #+#    #+#             */
/*   Updated: 2026/01/21 14:37:35 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <unistd.h>
int main (void)
{
	int div;
	int mod;

	ft_div_mod(4, 2, &div, &mod);
	write(1, "OK\n", 3);
	return(0);
}
*/
