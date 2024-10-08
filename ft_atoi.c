/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:13:30 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:16:30 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ismin(const char *str)
{
	char	*max;

	max = "-2147483648";
	if (str == max)
		return (1);
	return (0);
}	

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		isneg;

	i = 0;
	result = 0;
	isneg = 1;
	if (ft_ismin(str))
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
