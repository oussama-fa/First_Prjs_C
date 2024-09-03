#include <stdio.h>

int main()
{
	//Swap WhithOut Variable 
	int a, b;
	printf("A =");
	scanf("%d", &a);
	printf("B =");
	scanf("%d", &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("A = %d\n", a);
	printf("B = %d", b);
}
