/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:26:42 by dvauthey          #+#    #+#             */
/*   Updated: 2024/11/07 11:20:36 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*el_lst;
	void	*cntnt;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		cntnt = f(lst->content);
		el_lst = ft_lstnew(cntnt);
		if (el_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			del(cntnt);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, el_lst);
		lst = lst->next;
	}
	return (new_lst);
}
