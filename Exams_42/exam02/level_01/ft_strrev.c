#include <stdio.h>

char    *ft_strrev(char *str)
{
    if (!str)
        return (NULL);
    int i = 0;
    int len = 0;
    char tmp;
    while (str[len])
        len++;
    len--;
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}

int main(int ac, char **av)
{
    printf("%s\n", ft_strrev(av[1]));
}
