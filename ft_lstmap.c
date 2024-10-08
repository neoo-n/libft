/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:54:22 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:39:15 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		size_lst;
	int		i;
	t_list	*new_lst;
	t_list	*el_lst;

	i = 0;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	size_lst = ft_lstsize(lst);
	while (i < size_lst)
	{
		el_lst = ft_lstnew(f(lst->content));
		if (el_lst == NULL)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, el_lst);
		lst = lst->next;
		i++;
	}
	return (new_lst);
}
