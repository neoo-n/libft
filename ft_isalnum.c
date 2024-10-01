/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:25:44 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 13:33:06 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		   	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_isalnum('4'));
	printf("%i\n", ft_isalnum('A'));
	printf("%i\n", ft_isalnum('z'));
	printf("%i\n", ft_isalnum('9'));
	printf("%i\n", ft_isalnum('.'));
	printf("%i\n", ft_isalnum('/'));
	printf("%i\n", ft_isalnum('3'));
	return (0);
}*/
