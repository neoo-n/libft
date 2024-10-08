/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:54:53 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:54:57 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
