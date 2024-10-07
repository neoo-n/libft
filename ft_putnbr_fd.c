/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:09:13 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:40:48 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>

char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*result;
	
	i = 0;
	result = ft_itoa(n);
	while (result[i])
	{
		write(fd, &result[i], 1);
		i++;
	}
}
