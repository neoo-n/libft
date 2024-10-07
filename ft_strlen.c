/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:52:39 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:42:03 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>
size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("sdfgahujsfn"));
	printf("%lu\n", strlen("sdffn"));
	printf("%zu\n", ft_strlen("sdfgsfn"));
	printf("%zu\n", ft_strlen("s"));
	printf("%zu\n", ft_strlen(""));
	return (0);
}*/
