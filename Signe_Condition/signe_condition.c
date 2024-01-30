#include <stdio.h>

int main()
{
	//Swap 
	int n1, n2;
	int swp, A, B;
	printf("Enter the Value of A : ");
	scanf("%d",&n1);
	printf("Enter the Value of B : ");
	scanf("%d",&n2);
	if (n1 * n2 >= 0)
	{
		swp = n1;
		n1 = n2;
		n2 = swp;
	printf("New Value of A : %d\n", n1);
	printf("New Value of B : %d\n", n2);
	}
	else
	{
		A = n1 + n2;
		B = n1 * n2;
	printf("New Value of A : %d\n", A);
	printf("New Value of B : %d\n", B);
	}
	return (0);
}
