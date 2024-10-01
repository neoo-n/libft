/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:26:37 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 15:51:50 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	char	s[7] = "bonjou";
	char	s1[7] = "bonjou";
	ft_bzero(s, 3);
	bzero(s1, 3);
	printf("%s\n", s);
	printf("%s\n", s1);

	unsigned int	i[4] = {3, 2, 6, 6};
	unsigned int	i1[4] = {3, 2, 6, 6};
	ft_bzero(i, 0);
	bzero(i1, 0);
	for (int j = 0; j < 4; j++)
	{
		printf("i : %u\n",i[j]);
		printf("i1 : %u\n", i1[j]);
	}
	return (0);
}*/
