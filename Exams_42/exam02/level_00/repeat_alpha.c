#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int rep(char c)
{
    if (c >= 65 && c <= 90)
        return (c - 65 + 1);
    else if (c >= 97 && c <= 122)
        return (c - 97 + 1);
    return (1);
}

int main(int ac, char **av)
{
    int i = 0;
    int r = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            r = rep(av[1][i]);
            while (r--)
                ft_putchar(av[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}