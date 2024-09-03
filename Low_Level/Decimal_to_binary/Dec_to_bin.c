#include <unistd.h>

# define BIT sizeof(int) * 8
void	ft_putchar(char c);
void	ft_putnbr(int	nb);
void	dec_to_bin(int	num);
int		ft_atoi( char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
		dec_to_bin(ft_atoi(av[1]));
	else
		write(2, "Error\n", 6);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);//print one character
}
// putnbr tacket a int and print it 
void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		ft_putnbr(-(nb / 10));
		ft_putnbr(-(nb % 10));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + 48);// 48 is '0' ascii
}

void	dec_to_bin(int	num)
{
	int	size;
	int	i;
	int	bin[BIT];// store bin[(int) * 8] // bin[4 * 8] in my machine bin[32]

	size = BIT - 1;// 32 - 1 == 31
	while (size >= 0)// write binary from right to left
	{
		bin[size] = num & 1;// in bin[31] put if num in binary compare to 1 in binary, for example 0101 & 0001 = 1
		size--;// decrement size by one
		num >>= 1;// and shift to rigt with one position
	}
	i = 0;
	while (i < BIT)// just to write it
		ft_putnbr(bin[i++]);
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