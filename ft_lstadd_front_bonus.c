/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:48:55 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 18:35:14 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	printf("2222222222\n");
	if (lst == NULL || new == NULL)
		return ;
	printf("333333333333333\n");
	new->next = *lst;
	printf("444444444\n");
	lst = &new;
	printf("55555555555555\n");
}

int	main()
{
	t_list *begin;
	printf("haudhahsduhdhasd\n");
	t_list *el1 = NULL;
	t_list *el2 = NULL;
	t_list *el3 = NULL;
	t_list *el4 = NULL;
	
	printf("bruuuuuuuuuuuuuuuuuuuuuuuuh\n");
	begin = NULL;
	el1->content = "lorem";
	el1->next = NULL;
	el2->content = "ipsum";
	el2->next = NULL;
	el3->content = "dolor";
	el3->next = NULL;
	el4->content = "sit";
	el4->next = NULL;

	printf("1111111111\n");	
	ft_lstadd_front(&begin, el4);
    ft_lstadd_front(&begin, el3);
    ft_lstadd_front(&begin, el2);
    ft_lstadd_front(&begin, el1);
    while (begin)
    {
        printf("%s\n", begin->content);
        begin = begin->next;
    }
	return (0);
}
