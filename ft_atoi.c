/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:26:49 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/02 18:13:23 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalldigit(const char *str)
{
	int	i;

	i = 1;
	if (!ft_isdigit(str[0]) && str[0] != '-')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		isneg;
	char	*max;

	i = 0;
	result = 0;
	isneg = 0;
	max = "-2147483648";
	if (!ft_isalldigit(str))
		return (0);
	if (str == max)
		return (-2147483648);
	if (str[0] == '-')
	{
		i++;
		isneg = 1;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (isneg)
		return (result * -1);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *s = "34567";
	char *s1 = "0";
	char *s2 = "-567";
	char *s3 = "-2147483648";
	char *s4 = "21474836447";
	printf("%i\n", ft_atoi(s));
	printf("%i\n", atoi(s));
	printf("%i\n", ft_atoi(s1));
	printf("%i\n", atoi(s1));
	printf("%i\n", ft_atoi(s2));
	printf("%i\n", atoi(s2));
	printf("%i\n", ft_atoi(s3));
	printf("%i\n", atoi(s3));
	printf("%i\n", ft_atoi(s4));
	printf("%i\n", atoi(s4));
	return (0);
}*/
