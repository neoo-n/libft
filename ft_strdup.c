/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:32:30 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/03 13:26:08 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s2 = malloc((i + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (s2);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *s1 = "Je sais pas";
	const char *s2 = ft_strdup(s1);
	const char *s3 = strdup(s1);
	printf("1 : %s\n", s2);
	printf("2 : %s\n", s3);
	return (0);
}*/