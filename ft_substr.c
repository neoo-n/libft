/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:57:31 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 11:45:30 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;
	int		max;

	if (len > ft_strlen(s))
		max = ft_strlen(s);
	else
		max = len;
	result = malloc((max + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		result[0] = '\0';
		return (result);
	}
	i = 0;
	while (s[start + i] && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
