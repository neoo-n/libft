/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:07:00 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:39:24 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = malloc(sizeof(t_list *));
	if (res == NULL)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
