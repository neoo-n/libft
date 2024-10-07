/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:57:11 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:37:26 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	int		*tab;

	i = 0;
	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	while (i < count)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *) tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*t;
	int *t2;
	size_t count = 4;
	size_t size = 3;
	t = (int *) ft_calloc(count, size);
	t2 = (int *) calloc(count, size);
	for (size_t i = 0; i < count; i++)
	{
		printf("t %zu: %d\n", i, t[i]); 
		printf("t2 %zu: %d\n", i, t2[i]);
	}	
	return (0);
}*/
