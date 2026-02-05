/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:50:38 by gparente          #+#    #+#             */
/*   Updated: 2026/01/27 16:50:44 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		if (str [i] >= 97 && str[i] <= 122)
			str [i] = str [i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str []="fratm";
	printf("%s\n", ft_strupcase(str));
}
*/	
