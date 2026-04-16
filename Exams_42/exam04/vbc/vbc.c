#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void	error(char c)
{
	if (c)
		printf("Unexpected token '%c'\n", c);
	else
		printf("Unexpected end of input\n");
	exit(1);
}

int expr(char **s);
int term(char **s);
int fact(char **s);

int fact(char **s)
{
	if (**s == '(')
	{
		(*s)++;
		int val = expr(s);
		if (**s != ')')
			error(**s);
		(*s)++;
		return (val);
	}
	if (isdigit(**s))
		return *(*s)++ - 48;
	error(**s);
	return 0;
}

int term(char **s)
{
	int val = fact(s);
	while (**s == '*')
	{
		(*s)++;
		val *= fact(s);
	}
	return val;
}

int expr(char **s)
{
	int val = term(s);
	while (**s == '+')
	{
		(*s)++;
		val += term(s);
	}
	return val;
}

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	char *input = av[1];
	int res = expr(&input);
	if (*input)
		error(*input);
	printf("%d\n", res);
	return 0;
}
