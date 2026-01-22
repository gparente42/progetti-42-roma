/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:36:34 by gparente          #+#    #+#             */
/*   Updated: 2026/01/19 16:36:41 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number0;	

	number0 = '0';
	while (number0 <= '9')
	{
		write(1, &number0, 1);
		number0 ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
