#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i = -1;
    char *s = malloc(ft_strlen(src) + 1);
    if (!s)
       return (NULL);
    while (src[++i])
        s[i] = src[i];
    s[i] = '\0';
    return (s);
}

int main()
{
    printf("%s", ft_strdup("hello World"));
}
