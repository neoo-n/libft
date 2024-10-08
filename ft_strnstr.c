/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:56:44 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 18:08:06 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len && haystack[i + j]
			&& needle[j])
			j++;
		if (j == len_needle)
			break ;
		else
			j = 0;
		i++;
	}
	if (j != len_needle)
		return (NULL);
	return ((char *) &haystack[i]);
}
