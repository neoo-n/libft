/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:03:26 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 14:33:26 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cond;

	i = 0;
	cond = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (s1[i] || s2[i])
			cond = 1;
	}
	if (cond)
		return (s1[i - 1] - s2[i - 1]);
	else
		return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "help help";
	char *s2 = "help  help";
	int nb = 5;
	printf("%i\n", ft_strncmp(s1, s2, nb));
	printf("%i\n", strncmp(s1, s2, nb));
	return (0);
}*/