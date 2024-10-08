/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:18:15 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 18:16:17 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
