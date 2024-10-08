/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:33:35 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:39:46 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;
	
	i = 0;
	t = (unsigned char *) s;
	while (i < n)
	{
		if (t[i] == c)
			return ((void *) &s[i]);
		i++;
	}
	return (0);
}