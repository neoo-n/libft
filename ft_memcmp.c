/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:39:12 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 15:56:58 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((int) (t1[i] - t2[i]));
		i++;
	}
	if (i >= n)
		return (0);
	return ((int) (t1[i] - t2[i]));
}

/*
#include <stdio.h>
int main(void)
{
	char *s1 = "help help";
	char *s2 = "help help";
	printf("%i\n", ft_memcmp(s1, s2, 9));
	printf("%i\n", memcmp(s1, s2, 9));
	return (0);
}*/	
