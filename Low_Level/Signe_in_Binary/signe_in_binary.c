#include <unistd.h>

# define BIT sizeof(int) * 8
int	ft_atoi( char *str);
void	is_negative_positive(int num);

int main(int ac, char **av)
{
	if (ac == 2)
		is_negative_positive(ft_atoi(av[1]));
	else
		write(2, "Error\n", 6);
	return (0);
}
void	is_negative_positive(int num)
{
	int	msb;
	
	msb = 1 << (BIT - 1);
	if (num & msb)
		write(1, "N", 1);
	else
		write(1, "P", 1);
	write(1, "\n", 1);
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