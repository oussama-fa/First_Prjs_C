#include <stdio.h>

int main()
{
	//leap year or not leap year
	int y;

	printf("Enter Year :");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		printf("This a leap year");
	else
		printf("This is not leap year");
	return (0);
}
