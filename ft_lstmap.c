/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:54:22 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 15:02:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	int		size_lst;
	int		i;

	size_lst = ft_lstsize(lst);
	i = 0;
	new_lst = malloc(t_list);
	while (i < size_lst)
	{
		
		i++;

