#include <stdio.h>

int main()
{
	//who is the Bigger
	float a, b;

	printf("Enter First Number :");
	scanf("%f", &a);
	printf("Enter Secend Number :");
	scanf("%f", &b);
	if (a > b)
		printf("This is max number : %.2f\n",a);
	else
		printf("This is max number : %.2f\n",b);
}
