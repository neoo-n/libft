/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:03:26 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/07 23:42:48 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cond;

	i = 0;
	cond = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (s1[i] || s2[i])
			cond = 1;
	}
	if (cond)
		return (s1[i - 1] - s2[i - 1]);
	else
		return (s1[i] - s2[i]);
}