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

