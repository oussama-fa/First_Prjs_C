#include <stdio.h>

int main()
{
	//Positive or Negative
	float a;

	printf("Enter a Number :");
	scanf("%f", &a);
	if (a < 0)
		printf("This number is NEGATIVE");
	else if (a > 0)
		printf("This number is POSITIVE");
	else if (a == 0)
		printf("This number is NEUTRAL");
	return (0);
}
