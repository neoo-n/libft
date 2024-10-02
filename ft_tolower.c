/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:20:29 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 13:29:10 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 'f';
	int b = 'A';
	int c = 'Z';
	int d = 'H';
	int e = '.';
	int f = 'a';
	int g = 0;
	printf("%c\n", ft_tolower(a)); 
	printf("%c\n", ft_tolower(b)); 
	printf("%c\n", ft_tolower(c)); 
	printf("%c\n", ft_tolower(d)); 
	printf("%c\n", ft_tolower(e)); 
	printf("%c\n", ft_tolower(f)); 
	printf("%c\n", ft_tolower(g)); 
	return (0);
}*/
