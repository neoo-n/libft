/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:10:05 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:42:41 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>
int	ft_strlen(char const *s);

/*
char	f(unsigned int i, char c)
{
	return (c + i);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char const *s = "abcdefg";
	printf("%s\n", ft_strmapi(s, f));
	return (0);
}*/
