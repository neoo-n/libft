/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:26:49 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:45:21 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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