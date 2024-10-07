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

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	int		size_lst;
	int		i;

	size_lst = ft_lstsize(lst);
	i = 0;
	new_lst = malloc(t_list);
	if (new_lst == NULL)
		return (NULL);
	while (i < size_lst)
	{
		new_lst->content = f(lst->content);
		new_lst->next = lst->next;
		i++;
		
