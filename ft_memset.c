/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:07:00 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 16:58:16 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[8] = "Bonjour";
	printf("string : %s\n", ft_memset(s, '#', 6));
	printf("string : %s\n", memset(s, '#', 1));

	unsigned int i[4] = {1, 4, 6, 3};
	printf("int : %s\n", ft_memset(i, '*', 2));
	printf("int : %s\n", memset(i, '*', 2));

	return (0);
}*/
