/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:26:49 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/03 10:56:17 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		isneg;
	char	*max;

	i = 0;
	result = 0;
	isneg = 1;
	max = "-2147483648";
	if (str == max)
		return (-2147483648);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i++;
		isneg = -1;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (result * isneg);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * isneg);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *s = "     34567";
	char *s1 = "0";
	char *s2 = "-567";
	char *s3 = "-2147483648";
	char *s4 = "21474836447";
	char *s5 = "214748a6447";
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
	printf("%i\n", ft_atoi(s5));
	printf("%i\n", atoi(s5));
	return (0);
}*/
