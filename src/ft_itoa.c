/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:22:38 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/09 17:22:19 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_digit(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_res(long num, char *result, int nb_digit)
{
	while (num > 0)
	{
		result[nb_digit] = num % 10 + '0';
		num /= 10;
		nb_digit--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	int		nb_digit;

	num = n;
	nb_digit = ft_nb_digit(num);
	result = malloc((nb_digit + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	result[nb_digit] = '\0';
	if (num == 0)
	{
		result[0] = '0';
		return (result);
	}
	nb_digit--;
	result = ft_res(num, result, nb_digit);
	return (result);
}
