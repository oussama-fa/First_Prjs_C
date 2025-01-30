#include <stdlib.h>
#include <stdio.h>

int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (!(1&n))
			n /= 2;
		else
			return (0);
	}
	return (1);
}

// int	    is_power_of_2(unsigned int n)
// {
//     if (n == 0)
//         return (0);
//     return ((n & (n-1)) == 0);
// }

int main(int ac, char **av)
{
    if (is_power_of_2(15)) printf("T\n");
    else printf("F\n");
}
