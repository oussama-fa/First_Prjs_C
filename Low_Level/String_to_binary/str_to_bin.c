#include <unistd.h>

size_t	ft_strlen(char *s);
void	str_to_bin(char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
		str_to_bin(av[1]);
	else
		write(2, "Error", 6);
	write(1, "\n", 1);
}
size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	str_to_bin(char *str)
{
	int	n;
	int	i;
	int	bit;

	n = ft_strlen(str);
	i = 0;
	bit = 7;
	while (i < n)// this nested loop to loop for string and loop in char with 7 bits
	{
		while (bit >= 0)// loop in char bit by bit
		{
			if ((str[i] >> bit) & 1)
				write(1, "1", 1);
			else
				write(1, "0", 1);
			bit--;// decrement because start from left to right
		}
		write(1, " ", 1);// space to separe char by char 
		bit = 7;// reset bit to 7 to move a next character
		i++;// move to next char
	}
}