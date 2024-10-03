/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:41:00 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/03 14:07:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	while (s[i])
		i++;
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char const *s = "j'ai toujours pas d'inspi";
	char *t;

	t = ft_substr(s, 4, 4);
	printf("%s\n", t);
	return (0);
}*/