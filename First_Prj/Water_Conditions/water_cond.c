#include <stdio.h>

int main()
{
	// Etat Water
	float c;

	printf("Enter Water Temperature :");
	scanf("%f", &c);
	if (c <= 0)
		printf("state of water is ICE");
	else if (c > 0 && c < 100)
		printf("water state is LIQUID");
	else if (c >= 100)
		printf("water state is STEAM");
	return (0);
}
