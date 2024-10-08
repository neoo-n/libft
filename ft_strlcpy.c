/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:07:29 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:41:54 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
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