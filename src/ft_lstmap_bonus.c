/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:26:42 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/10 10:35:13 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*el_lst;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		el_lst = ft_lstnew(f(lst->content));
		if (el_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, el_lst);
		lst = lst->next;
	}
	return (new_lst);
}
