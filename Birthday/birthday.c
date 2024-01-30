#include <stdio.h>

int main()
{
	//This program is to show how many years you have
	//for 2024
	int a;
	const int b = 2024;

	printf("Enter your birthday year : \n");
	scanf("%d",&a);
	int c = b - a;
	printf("Your age is : %d\n", c);

}
