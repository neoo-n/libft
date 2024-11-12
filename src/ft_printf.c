/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:55:33 by dvauthey          #+#    #+#             */
/*   Updated: 2024/11/12 14:05:41 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	which_type(va_list args, const char *s, int i)
{
	int	count;
	int	isox;

	count = 0;
	isox = 1;
	if (s[i] == 'c')
		count += print_c(va_arg(args, int));
	if (s[i] == 's')
		count += print_s(va_arg(args, char *));
	if (s[i] == 'p')
		count += print_p(va_arg(args, unsigned long), isox);
	if (s[i] == 'd' || s[i] == 'i')
		count += print_int(va_arg(args, int));
	if (s[i] == 'u')
		count += print_u(va_arg(args, unsigned int));
	if (s[i] == 'x')
		count += print_xlow(va_arg(args, unsigned int));
	if (s[i] == 'X')
		count += print_xup(va_arg(args, unsigned int));
	if (s[i] == '%')
		count = write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	t_count	ac;

	ac.i = 0;
	ac.count = 0;
	ac.error = 0;
	va_start(args, s);
	while (s[ac.i])
	{
		if (s[ac.i] == '%')
		{
			ac.error = which_type(args, s, ++(ac.i));
			if (ac.error == -1)
				return (-1);
		}
		else
		{
			ac.error = write(1, &s[ac.i], 1);
			if (ac.error == -1)
				return (-1);
		}
		ac.count += ac.error;
		(ac.i)++;
	}
	va_end(args);
	return (ac.count);
}
