#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int tab[256] = {0};
    if (ac == 3)
    {
        while (j < 3)
        {
            while (av[j][i])
                tab[(int) av[j][i++]] = 1;
            i = 0;
            j++;
        }
        j = 1;
        while (j < 3)
        {
            while (av[j][i])
            {
                if (tab[(int)av[j][i]] == 1)
                {
                    write(1, &av[j][i], 1);
                    tab[(int)av[j][i]] = 2;
                }
                i++;
            }
            i = 0;
            j++;
        }
    }
    write(1, "\n", 1);
}
