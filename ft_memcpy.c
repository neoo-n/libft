/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:30:02 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:30:26 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tempdst;
	const unsigned char	*tempsrc;

	i = 0;
	tempdst = dst;
	tempsrc = src;
	while (i < n)
	{
		tempdst[i] = tempsrc[i];
		i++;
	}
	tempdst[i] = '\0';
	return (dst);
}
