/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:09:13 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/04 15:24:52 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
