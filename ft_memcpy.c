/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:52:26 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:40:07 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <libft.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdst;
	const unsigned char	*tempsrc;

	i = 0;
	tempdst = dst;
	tempsrc = src;
	while (i < n)
	{
		tempdst[i] = tempsrc[i];
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
	char d[6];
	char s1[6] = "hello";
	char d1[6];
	printf("%s\n", ft_memcpy(d, s, 3));
	printf("%s\n", memcpy(d1, s1, 3));
	int	i[4] = {115, 116,117, 4};
	int i1[4];
	int i2[4];
	printf("%s\n", ft_memcpy(i1, i, 2));
	printf("%s\n", memcpy(i2, i, 2));
	int last[5] = {115, 2, 3, 4, 5};
	char dd1[5];
	char dd2[5];
	printf("%s\n", ft_memcpy(dd1, last, 3));
	printf("%s\n", memcpy(dd2, last, 3));
	return (0);
}*/
