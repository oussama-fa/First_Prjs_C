// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

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

// int main(int ac, char **av)
// {
//     printf("%s\n", ft_strrev(av[1]));
// }
