#include <unistd.h>

int	ft_atoi( char *str);

void	is_odd_or_even(int	n)
{
	if (n & 1 == 1)// compare the binary with 1 in binary
		write(1, "Odd", 3);
	else
		write(1, "Even", 4);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		is_odd_or_even(ft_atoi(av[1]));
	else
		write(2, "ERROR\n", 6);
	return (0);
}

int	ft_atoi( char *str)
{
	int	i;
	int	res;
	int	sig;

	i = 0;
	res = 0;
	sig = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	return (sig * res);
}