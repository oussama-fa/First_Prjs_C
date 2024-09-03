#include <unistd.h>

void	char_to_bin(char c)
{
	int	bin;

	bin = 7;
	while (bin >= 0)
	{
		if ((c >> bin) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bin--;
	}
}

int main(int ac, char **av)
{
	if (ac == 2 && av[1][1] == '\0')
		char_to_bin(av[1][0]);
	else
		write(2, "Error\n", 6);
	return (0);
}