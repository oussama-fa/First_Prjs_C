#include "get_next_line.h"

char	*ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	char *dest = malloc(ft_strlen(src) + 1);
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !dest)
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcpy(dest + ft_strlen(s1), s2);
	free(s1);
	return (dest);
}

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	char        *line, *nline;
	int            i, j;

	line = ft_strdup(buffer);
	if (!(nline = ft_strchr(line, '\n')) && (i = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[i] = '\0';
		line = ft_strjoin(line, buffer);
	}
	if (ft_strlen(line) == 0)
		return (free(line), NULL);
	if (nline != NULL)
	{
		j = nline - line + 1;
		ft_strcpy(buffer, nline + 1);
	}
	else
	{
		j = ft_strlen(line);
		buffer[0] = '\0';
	}
	line[j] = '\0';
	return (line);
}

// #include <stdio.h>
// #include <fcntl.h>
// int	main(int ac, char **av)
// {
// 	int		fd;
// 	char	*line;

// 	(void)ac;
// 	fd = open(av[1], O_RDONLY);
// 	if (fd == -1)
// 		return (-1);
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (!line)
// 		{
// 			puts("{null}");
// 			break ;
// 		}
// 		printf("%s", line);
// 		free(line);
// 	}
// 	return (0);
// }