/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:22:23 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 11:47:11 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		lensrc;
	size_t	i;
	size_t	lendst;

	lensrc = 0;
	i = 0;
	lendst = 0;
	while (src[lensrc])
		lensrc++;
	while (dst[lendst])
		lendst++;
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] && i < (dstsize - lendst - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

int	main(void)
{
	char *s1 = "moi helppppp";
	char *s2 = "moi helppppp";
	char d1[16] = "sauvez ";
	char d2[16] = "sauvez ";
	printf("%zu\n", ft_strlcat(d1, s1, 3));
	printf("%s\n", d1);
	printf("%lu\n", strlcat(d2, s2, 3));
	printf("%s\n", d2);
	return (0);
}
