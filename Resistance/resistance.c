#include <stdio.h>

int main()
{
	//Resistance
	float R1, R2, R3, Rser, Rpar;

	printf("Entre R1 and R2, R3 :");
	scanf("%f%f%f", &R1, &R2, &R3);
	Rser = R1 + R2 + R3;
	printf("The resistors are connected in series : %.2f\n", Rser);
	Rpar = ((R1 * R2 * R3)/((R1 * R2) + (R1 * R3) + (R2 * R3)));
	printf("The resistors are connected in parallel : %.2f", Rpar);
	return 0;
}
