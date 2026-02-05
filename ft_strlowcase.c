/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:32:12 by gparente          #+#    #+#             */
/*   Updated: 2026/01/27 17:32:15 by gparente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
			str [i] = str [i] + 32;
		i ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str [] = "FRATM";

	printf("%s\n", ft_strlowcase(str));
}
*/
