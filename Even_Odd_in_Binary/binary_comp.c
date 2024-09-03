#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int	n;

	n = atoi(av[1]);
	if (ac == 2)
	{
		if (n & 1 == 1)// compare the binary with 1 in binary
			write(1, "Odd", 3);
		else
			write(1, "Even", 4);
		write(1, "\n", 1);
	}
	else
		write(2, "ERROR\n", 6);
	return (0);
}