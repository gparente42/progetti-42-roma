/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giparent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:43:43 by giparent          #+#    #+#             */
/*   Updated: 2026/05/25 09:44:38 by giparent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Divide s in array di stringhe usando c come delimitatore, termina con NULL
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	inword;

	count = 0;
	inword = 0;
	while (*s)
	{
		if (*s != c && !inword)
		{
			inword = 1;
			count++;
		}
		else if (*s == c)
			inword = 0;
		s++;
	}
	return (count);
}

static void	free_all(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

static char	**fill_array(char **arr, char const *s, char c)
{
	int	i;
	int	start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		arr[i] = ft_substr(s, 0, start);
		if (!arr[i])
			return (free_all(arr, i), NULL);
		s += start;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (fill_array(arr, s, c));
}
