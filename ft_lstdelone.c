/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:48:33 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 14:31:48 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *));
{
	if (lst == NULL || del == NULL)
		return;
	del(lst->content);
	free(lst);
}
