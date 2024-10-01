/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:24:46 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 12:44:37 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_isdigit('0'));
	printf("%i\n", ft_isdigit(194));
	printf("%i\n", ft_isdigit('g'));
	printf("%i\n", ft_isdigit('4'));
	return (0);
}*/
