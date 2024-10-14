/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:57:18 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 11:48:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_countnotinset(const char *s1, const char *set)
{
	size_t	i;
	int		count;
	size_t	size;

	i = 0;
	count = 0;
	size = ft_strlen(s1);
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	if (i == size)
		return (count);
	count = size - i - 1;
	while (ft_isinset(s1[i + count], set))
		count--;
	return (count + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*result;
	size_t	count;

	count = ft_countnotinset(s1, set);
	i = 0;
	j = 0;
	result = malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (ft_isinset(s1[i], set))
		i++;
	while (s1[i + j] && j < count)
	{	
		result[j] = s1[i + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}
