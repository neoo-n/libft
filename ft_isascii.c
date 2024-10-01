/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:33:25 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 13:38:35 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_isascii(12));
	printf("%i\n", ft_isascii(-12));
	printf("%i\n", ft_isascii(127));
	printf("%i\n", ft_isascii(0));
	printf("%i\n", ft_isascii(128));
	printf("%i\n", ft_isascii(134));
	printf("%i\n", ft_isascii(17));
	return (0);
}*/
