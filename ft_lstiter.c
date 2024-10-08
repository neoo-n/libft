/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:33:53 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:26:25 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;
	int	size_lst;

	i = 0;
	if (lst == NULL || f == NULL)
		return ;
	size_lst = ft_lstsize(lst);
	while (i < size_lst)
	{
		f(lst->content);
		lst = lst->next;
		i++;
	}
}
