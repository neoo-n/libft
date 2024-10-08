/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:57:11 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:37:26 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	int		*tab;

	i = 0;
	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	while (i < count)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *) tab);
}
