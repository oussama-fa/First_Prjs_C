// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = -1;
	int	j;
	int check;
	while (s[++i])
	{
		j = -1;
		check = 0;
		while (accept[++j])
		{
			if (s[i] == accept[j])
				check = 1;
		}
		if (!check)
			return (i);
	}
	return (i);
}

// int main(int ac, char **av)
// {
//     printf("sys: %zu\n", strspn(av[1], av[2]));
//     printf("min: %zu\n", ft_strspn(av[1], av[2]));
// }
