#include <stdio.h>

int main()
{
	//calcul of factorial
	int n;
	float i, f;

	printf("Enter Number :");
	scanf("%d", &n);

	if (n > 0)
	{
		i = 1;
		f = 1;
		while(i < n && i++)
		{
			f *= i;
		}
		printf("!%d = %.2f", n, f);
	}
	else if (n == 0)
		printf("!0 = 1");
	else
		printf("Number is Negative !");
	return (0);
}
