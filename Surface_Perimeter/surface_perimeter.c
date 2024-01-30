#include <stdio.h>

int main()
{
	//Calcule Surface and Perimetre
	float l;
	float L;

	printf("Entre the length : \n");
	scanf("%f", &l);
	printf("Entre the width : \n");
	scanf("%f", &L);

	float sur = l * L;
	float per = (l * L) * 2;

	printf("The SURFACE is : %.2f\n", sur);
	printf("The PERIMETRE is : %.2f\n", per);
}
