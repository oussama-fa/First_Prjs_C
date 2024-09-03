#include <stdio.h>
#include <math.h>

int main()
{
	//power
	int x, y, p;

	printf("Entre x:");
	scanf("%d",&x);
	printf("Entre y:");
	scanf("%d",&y);
	p = pow(x,y);
	printf("%d To The Power of %d is : %d", x, y, p);
	return (0);
}
