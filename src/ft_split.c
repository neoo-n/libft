/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:52:57 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 16:50:20 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_row(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

static int	ft_nb(const char *s, char c, int i, int *start)
{
	while (s[i] == c && s[i])
		i++;
	*start = i;
	while (s[i] != c && s[i])
		i++;
	return (i);
}	

static char	*ft_strinrow(char const *s, int start, int end)
{
	char	*row;
	int		i;

	i = 0;
	row = malloc((end - start + 1) * sizeof(char));
	if (row == NULL)
		return (NULL);
	while (i < (end - start))
	{
		row[i] = s[start + i];
		i++;
	}
	row[i] = '\0';
	return (row);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	i = 0;
	j = 0;
	start = 0;
	result = malloc((ft_nb_row(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		i = ft_nb(s, c, i, &start);
		if (start != i)
		{
			result[j] = ft_strinrow(s, start, i);
			if (!result[j])
				return (NULL);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
