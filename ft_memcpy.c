/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:52:26 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:40:07 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdst;
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