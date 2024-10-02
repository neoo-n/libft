/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:13:09 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 13:29:30 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 'F';
	int b = 'a';
	int c = 'z';
	int d = 'h';
	int e = '.';
	int f = 'A';
	int g = 0;
	printf("%c\n", ft_toupper(a)); 
	printf("%c\n", ft_toupper(b)); 
	printf("%c\n", ft_toupper(c)); 
	printf("%c\n", ft_toupper(d)); 
	printf("%c\n", ft_toupper(e)); 
	printf("%c\n", ft_toupper(f)); 
	printf("%c\n", ft_toupper(g)); 
	return (0);
}*/
