#include <stdio.h>
#include <stdlib.h>

// Multiplication Table by using goto 

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2 && av[1][0] != '\0')
	{
		int	nb = atoi(av[1]);

		table :
		{
			printf("| %d | x | %d | = | %d |\n", nb, i, i*nb);
			i++;
		}
		if (i <= 12)
			goto table;
	}
	else
	{
		printf("Invalid Input\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}