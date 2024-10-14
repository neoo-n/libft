/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:29:59 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 16:44:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((unsigned char) c == 0)
	{
		i = ft_strlen(s);
		return ((char *) &s[i]);
	}
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "Je ne sais pas travailler";
	int c = ' ';
	int c1 = ' ';
	printf("%s\n", ft_strchr(s, c));	
	printf("%s\n", strchr(s, c1));	
	return (0);
}*/
