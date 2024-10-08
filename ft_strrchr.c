/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:58:06 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/08 13:57:01 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len + 1])
		len++;
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *) &s[len]);
		len--;
	}
	return (0);
}
