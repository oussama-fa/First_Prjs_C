// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

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