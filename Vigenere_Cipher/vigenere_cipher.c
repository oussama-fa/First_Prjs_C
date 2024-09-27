#include <unistd.h>

//vigenere cipher
int	rep(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 97);
	else if (c >= 'A' && c <= 'Z')
		return(c - 65);
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	char	num1[] = "abcdefghijklmnopqrstuvwxyz";
	char	num2[] = "zyxwvutsrqponmlkjihgfedcba";
	int	nbr = 0;
	int	i = 0;
	int	sp;
	int	sp_1;
	if (ac == 3)
	{
		while (av[1][i] && av[2][i])
		{
			sp = rep(av[1][i]);
			sp_1 = rep(av[2][i]);
			int res = sp - sp_1;
			if (res >= 0)
				nbr = num1[res];
			if (res < 0)
			{
				res *= -1;
				res -= 1;
				nbr = num2[res];
			}
			ft_putchar(nbr);
			i++;
		}
	}
	else
		write(1, "2 args !\n", 9);
}
