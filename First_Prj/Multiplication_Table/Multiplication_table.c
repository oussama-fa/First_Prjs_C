#include <stdio.h>

int main()
{
	//Multiplication table
	int i, r, n;
	
	printf("Enter number :");
	scanf("%d",&n);
	for (i = 0; i <= 12; i++)
	{
		r = i * n;
		printf("%d x %d = %d\n",n , i, r);
	}
}
