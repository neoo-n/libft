/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:30:58 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 14:32:51 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	int		size_lst;
	int		i;
	t_list	*temp;

	size_lst = ft_lstsize(lst);
	i = 0;
	temp = lst;
	while (i < size_lst)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
