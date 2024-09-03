#include <stdio.h>

int main()
{
	//This program is to collect five points and show the average
	int a, b, c, d ,e,som, res;
	printf("Note 1 :");
	scanf("%d", &a);
	printf("Note 2 :");
	scanf("%d", &b);
	printf("Note 3 :");
	scanf("%d", &c);
	printf("Note 4 :");
	scanf("%d", &d);
	printf("Note 5 :");
	scanf("%d", &e);
	som = a + b + c + d + e;
	printf("The Amount : %d\n", som);
	res = som / 5;
	printf("The Average : %d ", res);
	return 0;
}
