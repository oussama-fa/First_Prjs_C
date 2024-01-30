#include <stdio.h>

int main()
{
	// Calcule The sphare Value 
	float r, v;

	printf("Enter Sphere Radius :");
	scanf("%f",&r);
	v = (4 * 3.14 *(r * r * r)) /3;
	printf("The Sphere Value : %.2f", v);
}
