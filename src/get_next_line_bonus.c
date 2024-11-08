/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:47:07 by dvauthey          #+#    #+#             */
/*   Updated: 2024/11/08 14:19:48 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_line(char *stash, int fd, int *iserror)
{
	char	buff[BUFFER_SIZE + 1];
	int		nb_read;

	nb_read = BUFFER_SIZE;
	while (nb_read == BUFFER_SIZE)
	{
		nb_read = read(fd, buff, BUFFER_SIZE);
		if (nb_read == 0)
			return (stash);
		if (nb_read < 0)
		{
			*iserror = 1;
			return (NULL);
		}
		buff[nb_read] = '\0';
		stash = get_ft_strjoin(stash, buff);
		if (!stash)
			return (NULL);
		if (is_n(stash))
			return (stash);
	}
	return (stash);
}

static char	*cpy_line(char *line, char *stash)
{
	int		j;
	int		until_n;
	char	*temp;
	int		len_line;

	j = 0;
	until_n = 0;
	len_line = 0;
	if (line)
		len_line = get_ft_strlen(line);
	while (stash[until_n + 1] && stash[until_n] != '\n')
		until_n++;
	until_n++;
	temp = get_ft_calloc((len_line + until_n + 1), sizeof(char));
	if (!temp)
		return (NULL);
	while (len_line && line[j])
	{
		temp[j] = line[j];
		j++;
	}
	temp = temp_stash(stash, temp, j, until_n);
	free(line);
	return (temp);
}	

static char	*del_stash(char *stash)
{
	int		i;
	int		until_n;
	int		len;
	char	*temp;

	i = 0;
	until_n = 0;
	len = get_ft_strlen(stash);
	while (stash[until_n + 1] && stash[until_n] != '\n')
		until_n++;
	if (len == until_n + 1)
	{
		free(stash);
		return (NULL);
	}
	temp = get_ft_calloc((len - until_n + 1 + 1), sizeof(char));
	if (!temp)
		return (NULL);
	while (until_n + 1 + i < len)
	{
		temp[i] = stash[i + until_n + 1];
		i++;
	}
	free(stash);
	return (temp);
}

static char	*err_end(char *line, char *stash, int iserror)
{
	if (iserror)
	{
		free(stash);
		free(line);
		return (NULL);
	}
	else
	{
		free(stash);
		return (line);
	}
}

char	*get_next_line(int fd)
{
	static char	*stash[1024];
	char		*line;
	int			iserror;

	line = NULL;
	iserror = 0;
	if (stash[fd])
	{
		line = cpy_line(line, stash[fd]);
		stash[fd] = del_stash(stash[fd]);
	}
	if (!stash[fd])
	{
		stash[fd] = read_line(stash[fd], fd, &iserror);
		if (!stash[fd])
			return (err_end(line, stash[fd], iserror));
		line = cpy_line(line, stash[fd]);
		stash[fd] = del_stash(stash[fd]);
	}
	return (line);
}
