// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res = 0;
	int	sig = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sig *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		res = res * 10 + (*s++ - 48);
	return (res * sig);
}

