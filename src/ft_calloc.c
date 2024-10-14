/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:18:15 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 09:41:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*tab;

	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, count * size);
	return ((void *) tab);
}
