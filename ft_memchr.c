/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:33:35 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 15:38:18 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;
	
	i = 0;
	t = (unsigned char *) s;
	while (i < n)
	{
		if (t[i] == c)
			return ((void *) &s[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s = "Je sais pas";
	char e1 = 'y';
	char e2 = 'y';
	printf("%s\n", ft_memchr(s, e1, 11));
	printf("%s\n", memchr(s, e2, 11));
	return (0);
}*/
