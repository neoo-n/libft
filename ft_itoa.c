/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:08:42 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/04 11:56:39 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_nb_digit(int *n, int *isneg)
{
	int	count;
	int	temp;

	count = 0;
	if (*n < 0)
	{
		count++;
		*n *= -1;
		*isneg = -1;
	}
	temp = *n;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		nb_digit;
	int		isneg;

	isneg = 1;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	nb_digit = ft_nb_digit(&n, &isneg);
	result = malloc((nb_digit + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	result[nb_digit] = '\0';
	nb_digit--;
	while (n > 0)
	{
		result[nb_digit] = n % 10 + '0';
		n /= 10;
		nb_digit--;
	}
	if (isneg == -1)
		result[0] = '-';
	return (result);
}

/*
int	main(void)
{
	int n = 0;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/