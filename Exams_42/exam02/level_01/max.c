#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = 0;
    if (!len)
          return (0);
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

int main()
{
    int int_tab[] = {-1, -21, -2, -24, -9};
	printf("%d", max(int_tab, 5));
}
