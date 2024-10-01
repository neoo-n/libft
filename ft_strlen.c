/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:52:39 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 14:06:42 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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
