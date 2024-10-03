/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:23:48 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/03 15:01:24 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isinset(char c, char const *set)
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

int	ft_countinset(const char *s1, const char *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ft_isinset(s1[i], set))
		i++;
	while (s1[i + count])
		count++;
	i--;
	while (ft_isinset(s1[i + count], set))
		count--;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = malloc((ft_countinset(s1, set) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (ft_isinset(s1[i], set))
		i++;
	while (s1[i + j])
	{
		result[j] = s1[i + j];
		j++;
	}
	j--;
	while (ft_isinset(result[j], set))
	{
		result[j] = '\0';
		j--;
	}
	result[j + 1] = '\0';
	return (result);
}


#include <stdio.h>
int	main(void)
{
	char const *s = "   ../,>. a./. l'aide, .,./>  .";
	char const *set = " .,>/";
	char *res = ft_strtrim(s, set);
	printf("%s\n", res);
	return (0);
}
