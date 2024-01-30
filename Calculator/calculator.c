#include <stdio.h>

int main()
{
	//This program is CALCULATOR
	float x, y, r;
	char n;

	printf("Chose your opperation | - | + | / | * |\n");
	scanf("%c", &n);
	printf("Enter first number :");
	scanf("%f", &x);
	printf("Enter secend number :");
	scanf("%f", &y);
	if (n == '*')
		r = x * y;
	else if (n == '+')
		r = x + y;
	else if (n == '-')
		r = x - y;
	else if (n == '/')
		r = x / y;
	printf("Result Is : %.2f\n", r);
	return (0);
}
