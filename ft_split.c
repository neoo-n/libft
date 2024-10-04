/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:04:31 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/04 11:08:06 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_nb_row(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i - 1] == c)
			count++;
		i++;
	}
	count++;
	return (count);
}

char	*ft_strinrow(char const *s, int start, int end)
{
	char	*row;
	int		i;

	i = 0;
	row = malloc((end - start + 1) *sizeof(char));
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
		if (s[i] != c && s[i + 1])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			result[j] = ft_strinrow(s, start, i);
			j++;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

/*
int	main(void)
{
	const char *s = "..	.  Je.  ne . sais ..    pas  .  ...";
	char **tab = ft_split(s, '.');
	for (int i = 0; i < 6; i++)
		printf("%s\n", tab[i]);
	return (0);
}*/
