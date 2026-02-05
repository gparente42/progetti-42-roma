/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:45:11 by gparente          #+#    #+#             */
/*   Updated: 2026/01/27 10:49:18 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main (void)
{
	if (ft_str_is_alpha ("ciao"))
		write (1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (ft_str_is_alpha ("ciao42"))
		write (1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (ft_str_is_alpha (""))
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	return (0);
}
*/
