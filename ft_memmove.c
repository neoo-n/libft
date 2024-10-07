/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:58:49 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:40:15 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tempdst;
	const unsigned char	*tempsrc;
	unsigned char		temp[len + 1];

	i = 0;
	tempdst = dst;
	tempsrc = src;
	while (i < len)
	{
		temp[i] = tempsrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		tempdst[i] = temp[i];
		i++;
	}
	tempdst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[6] = "hello";
	char d1[6];
	char d2[6];
	printf("%s\n", ft_memmove(d1, s, 3));
	printf("%s\n", memmove(d2, s, 3));
	return (0);
}*/
