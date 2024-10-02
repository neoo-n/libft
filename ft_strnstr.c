/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:57:13 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 16:41:03 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = 0;
	while (needle[len_needle])
		len_needle++;
	if (len_needle == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			if (j == len_needle - 1)
				return ((char *) &haystack[i - j]);
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "J'ai vraiment plus d'inspi";
	char *s2 = "vraiment";
	printf("%s\n", ft_strnstr(s1, s2, 20));
	printf("%s\n", strnstr(s1, s2, 20));
	return (0);
}*/	
