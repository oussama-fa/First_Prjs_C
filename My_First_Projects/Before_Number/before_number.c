#include <stdio.h>

int main()
{
	//This program to show all numbers before your number
	int i, n, s;

	printf("Enter Number : ");
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		s = 0;
		s = s + (1 / i);
		printf("%d", i);
		if (i == n)
		{
			printf("\n");
			return (0);
		}
		printf(", ");
		i++;
	}
}
