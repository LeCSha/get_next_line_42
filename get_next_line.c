/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 05:10:16 by abaille           #+#    #+#             */
/*   Updated: 2018/05/18 05:10:25 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_buf_to_str(char *str, int *ret, int fd)
{
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	unsigned int	i;

	while ((*ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		i = 0;
		if (buf[i])
		{
			buf[*ret] = '\0';
			if (str != NULL)
			{
				tmp = ft_strdup(str);
				free(str);
				str = ft_strjoin(tmp, buf);
				free(tmp);
			}
			else
				str = ft_strdup(buf);
		}
	}
	return (str);
}

char	*ft_cutndup(char *str, int i)
{
	char *tmp;

	tmp = ft_strsub(str, i + 1, ft_strlen(str) - i);
	free(str);
	str = ft_strdup(tmp);
	free(tmp);
	return (str);
}

char	*ft_strfdup(char *line, char **str)
{
	line = ft_strdup(*str);
	free(*str);
	*str = NULL;
	return (line);
}

int		get_next_line(int const fd, char **line)
{
	unsigned int	i;
	static char		*str[OPEN_MAX];
	int				ret;

	if (!(line) || fd < 0 || fd > OPEN_MAX)
		return (-1);
	str[fd] = read_buf_to_str(str[fd], &ret, fd);
	if (str[fd] != NULL && ret == 0)
	{
		i = 0;
		while (str[fd][i] != '\0')
		{
			if (str[fd][i] == '\n')
			{
				*line = ft_strsub(str[fd], 0, i);
				if (ft_strlen(str[fd]) > i)
					str[fd] = ft_cutndup(str[fd], i);
				return (1);
			}
			i++;
		}
		*line = ft_strfdup(*line, &str[fd]);
		return (i == 0 ? 0 : 1);
	}
	return (ret);
}

int main(int ac, char **av)
{
    int fd;
    char *line;
    printf("putain de ta race");
    // *line = NULL;
    if (ac != 2)
        return (0);
    fd = open(av[1], O_RDONLY);
    // get_next_line(fd, line);
    printf("on rentre ds gnl");
    
    while (get_next_line(fd, &line) > 0)
    {
        printf("line : %s\n", line);
        free(line);
    }
	
	close(fd);
    return (0);
}