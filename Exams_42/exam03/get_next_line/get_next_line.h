#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(char *s, char c);
int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif