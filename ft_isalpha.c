/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:56:04 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/01 12:44:47 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_isalpha('a'));
	printf("%i\n", ft_isalpha('z'));
	printf("%i\n", ft_isalpha('A'));
	printf("%i\n", ft_isalpha('Z'));
	printf("%i\n", ft_isalpha('h'));
	printf("%i\n", ft_isalpha('7'));
	printf("%i\n", ft_isalpha(134));
	return (0);
}*/
