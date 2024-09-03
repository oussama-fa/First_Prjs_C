#include <unistd.h>
#include <stdlib.h>

# define BIT sizeof(int) * 8

int main(int ac, char **av)
{
	int	num;
	int	msb;

	if (ac == 2)
	{
		num = atoi(av[1]);
		msb = 1 << (BIT - 1);
		if (num & msb)
			write(1, "N", 1);
		else
			write(1, "P", 1);
		write(1, "\n", 1);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}