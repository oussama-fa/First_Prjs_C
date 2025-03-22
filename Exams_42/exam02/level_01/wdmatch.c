// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>

void    ft_putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
}

int main(int ac, char **av)
{
    char *tmp;
    if (ac == 3)
    {
        tmp = av[1];
        while (*tmp && *av[2])
        {
            while (*tmp == *av[2] && (*tmp && *av[2]))
                tmp++,av[2]++;
            av[2]++;
        }
        if (!(*tmp))
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
}
