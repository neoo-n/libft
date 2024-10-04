/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:10:05 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/04 12:16:24 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	(*f)(unsigned int i, char c)
{
	return (c + i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char const *s = "Je sais pas";
	printf("%s\n", ft_strmapi(s, f());
	return (0);
}
