/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:39:43 by rgaia             #+#    #+#             */
/*   Updated: 2017/12/10 17:38:58 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** @in: string currently stored for the line we're looking for for the FD,
**		buffer, and number of bytes read
** @out: 1: - concatenated line to stored_fd that contains respective FD, or
**			- created a fresh string at that FD index if it's the first time
**			  we're running through that gnl call
**		 0: - allocation fails for some reason
** @obs: ft_strjoin_ff: join strings, returning a freshly allocated string,
**						and 'ff' (free first passed-in parameter)
*/

static int		strstore_fd(char **stored_fd, char *buf)
{
	if (*stored_fd)
	{
		if ((*stored_fd = ft_strjoin_ff(*stored_fd, buf)) == NULL)
			return (0);
	}
	else
	{
		if ((*stored_fd = ft_strdup(buf)) == NULL)
			return (0);
	}
	return (1);
}

/*
** Gets length of substring up until first '\n'
** Allocates exact string size needed for stored line
** Copies substring up to, and not including, '\n'
** If stored_fd already contains more characters after '\n'. we copy those
**	to the beggining of the string, as we will not read them again from file,
** and if we don't do this, the characters will be lost or out of order
** at next store_fds Terminate store_fds with a NULL to limit string at that
** point, despite it containing other characters. May be an issue? Idk...
** Perhaps should store only needed string and not leave any unused memory, or
** ft_strclr, though this will happen anyway when we enter strstore_fd.
*/

static int		strstore_line(char **line, char **stored_fd)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if ((*stored_fd) == NULL || (**stored_fd) == '\0')
		return (0);
	while ((*stored_fd)[i] && (*stored_fd)[i] != '\n')
		i++;
	(*line) = ft_strnew(i);
	ft_strncpy(*line, *stored_fd, i);
	(*line)[i] = '\0';
	if ((*stored_fd)[i] == '\n')
		i++;
	while ((*stored_fd)[i])
		(*stored_fd)[j++] = (*stored_fd)[i++];
	(*stored_fd)[j] = '\0';
	return (1);
}

/*
** @in: file descriptor, and pointer to char pointer -> where we
**      write the next line. OBS: do NOT include '\n' at end.
** @out: 1: read of a new next line existed and was succesfully
**          written in double pointer **line
**       0: failed to store to line
**       		- no new line existed
**       		- failed to allocate memory for new line within
**         		  line pointer
**     (-1): - bad file descriptor
**           - failed to allocate memory for buffer
**           - read error
**
** @objective: store first found line that ends with a '\n', and leave
**             seek at next line
** @program_flow: - read from file to buffer until we find a '\n' in buffer
**                  or reach end of file
**                - if we fill up entire buffer without finding a '\n', we
**                  save (concat) buffer to string at the index for that fd,
**                  clear buffer, and continue reading from file to buffer
**                - once we find the '\n', we add the saved string for that
**                  fd to the line, delete the buffer, and return
*/

int				get_next_line(const int fd, char **line)
{
	int			bytes_read;
	char		*buf;
	static char	*stored_fd[NUM_FDS];

	if (line == NULL || fd < 0 || fd >= NUM_FDS)
		return (-1);
	if ((buf = ft_strnew(BUFF_SIZE)) == NULL)
		return (-1);
	while ((bytes_read = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[bytes_read] = '\0';
		if ((strstore_fd(&stored_fd[fd], buf)) == 0)
		{
			ft_strdel(&buf);
			return (0);
		}
		if ((ft_strchr(buf, '\n') || bytes_read < BUFF_SIZE))
			break ;
	}
	ft_strdel(&buf);
	if (bytes_read < 0)
		return (-1);
	if ((strstore_line(line, &stored_fd[fd])) == 0)
		return (0);
	return (1);
}
