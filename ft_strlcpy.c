/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:07:29 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 10:34:12 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize <= 0)
	{
		dst[i] = '\0';
		return (len);
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s = "help hell";
	char *s1 = "help hell";
	char d[0];
	char d2[0];
	printf("%zu\n", ft_strlcpy(d, s, 3));
	printf("%s\n", d);
	printf("%lu\n", strlcpy(d2, s1, 3));
	printf("%s\n", d2);
	return (0);
}*/
