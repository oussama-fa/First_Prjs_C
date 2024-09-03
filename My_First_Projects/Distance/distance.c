#include <stdio.h>
#include <math.h>
int main()
{
	//This Program for Coordinates
	float a, b, x, y, AB;

	printf("Entre A(Xa,Yb) :");
	scanf("%f%f",&a,&b);
	printf("Entre B(Xa,Yb) :");
	scanf("%f%f",&x,&y);
	AB = sqrt(pow((x - a),2)+pow((y - b),2));
	printf("Distance is: %.2f\n", AB);
}
