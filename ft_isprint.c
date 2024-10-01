/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:38:57 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 13:51:32 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_isprint(' '));
	printf("%i\n", ft_isprint('r'));
	printf("%i\n", ft_isprint('<'));
	printf("%i\n", ft_isprint(128));
	printf("%i\n", ft_isprint(127));
	printf("%i\n", ft_isprint(-6));
	return (0);
}*/
