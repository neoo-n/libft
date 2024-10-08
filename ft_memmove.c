/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:30:41 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:50:44 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tempdst;
	const unsigned char	*tempsrc;

	i = 0;
	tempdst = dst;
	tempsrc = src;
	if (tempsrc < tempdst && tempsrc + len > tempdst)
	{
		while (len > 0)
		{
			tempdst[len - 1] = tempsrc[len - 1];
			len--;
		}	
	}
	else if (tempdst != tempsrc && n > 0)
	{
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}
