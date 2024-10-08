/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:56:23 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 17:42:23 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*r1;
	unsigned char	*r2;

	i = 0;
	r1 = (unsigned char *) s1;
	r2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (r1[i] == r2[i]
		&& r1[i] && r2[i] && i < n)
		i++;
	if (i == n)
		return (r1[i - 1] - r2[i - 1]);
	return (r1[i] - r2[i]);
}
