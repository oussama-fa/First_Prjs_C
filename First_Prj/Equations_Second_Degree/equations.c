#include <stdio.h>
#include <math.h>

int main()
{
	//Quadratic equation
	float a, b, c, x, x1, x2;
	
	printf("Entre a :");
	scanf("%f", &a);
	if (a == 0)
	{
		printf("This equation is of premier degree");
		return (0);
	}
	printf("Entre b :");
	scanf("%f", &b);
	printf("Entre c :");
	scanf("%f",&c);
	
	float V = pow(b,2) - (4 * a * c);
	printf("delta = %.2f\n", V);
	if (V == 0)
	{
		x = (-b) / (2 * a);
		printf("this equation has only one solution : {%.2f}\n", x);
		return (0);
	}
	else if (V > 0)
	{
		x1 = ((-b) - sqrt(V)) / (2 * a);
		x2 = ((-b) + sqrt(V)) / (2 * a);
		printf("this equation admits two solutions : {%.2f,%.2f}\n", x1,x2);
	return (0);
	}
	else
		printf("this equation does not admit solutions\n");
	return(0);
}
