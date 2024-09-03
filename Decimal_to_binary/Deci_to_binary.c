#include <unistd.h>
#include <stdlib.h>

# define BIT sizeof(int) * 8
void	ft_putchar(char c);
void	ft_putnbr(int	nb);

int	main(int ac, char **av)
{
	int	num;
	int	size;
	int	i;
	int	bin[BIT];// store bin[(int) * 8] // bin[4 * 8] in my machine bin[32]

	if (ac == 2)
	{
		size = BIT - 1;// 32 - 1 == 31
		num = atoi(av[1]);// the number user input
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