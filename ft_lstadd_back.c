/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:43 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 14:32:13 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*temp;
	int		size_lst;

	i = 0;
	if (lst == NULL || new == NULL)
		return;
	temp = *lst;
	size_lst = ft_lstsize(*lst);
	while (i < size_lst)
	{
		temp = temp->next;
		i++;
	}
	temp->next = new;
}
