/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:10:40 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:27:27 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*next_el;

	count = 0;
	next_el = lst;
	while (next_el != NULL)
	{
		next_el = next_el->next;
		count++;
	}
	return (count);
}
