#include <stdio.h>

int main()
{
	//Try Again
		int n;
	star:
		printf("Enter number 5 :");
		scanf("%d", &n);
		if (n != 5)
			goto star;
		printf("NICE WORK !");
	return (0);
}
