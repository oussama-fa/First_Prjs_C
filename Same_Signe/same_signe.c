#include <stdio.h>

int main()
{
	//Same Signe or Diff Signe	
	float n1, n2;

	printf("Enter First Number : ");
	scanf("%f", &n1);
	printf("Enter Secend Number : ");
	scanf("%f", &n2);
	if (n1 >= 0 && n2 >= 0)
		printf("Same Signe");
	else if (n1 <= 0 && n2 <= 0)
		printf("Same Signe");
	else if (n1 >= 0 && n2 <= 0)
		printf("The are a different signe");
	else if (n1 <= 0 && n2 >= 0)
		printf("The are a different signe");
	return (0);
}
