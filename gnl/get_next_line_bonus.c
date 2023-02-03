/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:07:20 by aababach          #+#    #+#             */
/*   Updated: 2022/02/18 15:51:46 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_is_clear(char *line)
{
	int	i;

	i = 0;
	if (line)
	{
		while (line[i])
		{
			if (line[i] == '\n')
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int	myread(int fd, char **line, int buff_size)
{
	int	i;
	int	x;

	i = 0;
	free(*line);
	*line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (i <= BUFFER_SIZE)
	{
		(*line)[i] = 0;
		i++;
	}
	x = read(fd, *line, buff_size);
	if (x == -1)
		return (0);
	return (x);
}

char	*ft_strjoinn(char *line, char *chyata)
{
	int		i;
	int		j;
	char	*joined;
	int		line_len;
	int		chyata_len;

	chyata_len = ft_length(chyata);
	line_len = ft_length(line);
	joined = malloc (sizeof(char) * (line_len + chyata_len + 1));
	if (!joined)
		return (0);
	i = 0;
	j = 0;
	while (i < chyata_len)
	{
		joined[i] = chyata[i];
		i++;
	}
	while (i < line_len + chyata_len)
		joined[i++] = line[j++];
	joined[i] = 0;
	free(line);
	return (joined);
}

char	*get_next_line(int fd)
{
	int			i;
	char		*line;
	static char	*chyata[OPEN_MAX];
	char		*buffer;

	buffer = ft_strdup("");
	i = 0;
	line = malloc(sizeof(char) * 1);
	while (ft_is_clear(buffer) && myread(fd, &line, BUFFER_SIZE))
		buffer = ft_strjoin(line, buffer);
	free(line);
	buffer = ft_strjoinn(buffer, chyata[fd]);
	if (chyata[fd])
	{
		free(chyata[fd]);
		chyata[fd] = NULL;
	}
	if (!ft_is_clear(buffer))
		buffer = ft_clear(buffer, &chyata[fd]);
	if (!buffer[0])
	{
		free(buffer);
		return (0);
	}
	return (buffer);
}
