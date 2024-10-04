/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:22:33 by dvauthey          #+#    #+#             */
/*   Updated: 2024/10/04 14:33:06 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		printf("i : %i\n", i);
		f(i, &s[i]);
		printf("ssss : %c\n\n", s[i]);
		i++;
	}
}

/*
int	main(void)
{
	char *s;
	ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}*/
