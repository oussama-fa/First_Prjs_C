#include <stdio.h>

int main()
{
	//change from numbers To 00H, 00Min, 00S
	int s, m, h, T;

	printf("Enter Time In Seconds :");
	scanf("%d", &T);
	h = T / 3600;
	m = (T % 3600) / 60;
	s = (T % 3600) % 60;
	printf("%d Hours %d Minutes %d Seconds", h, m, s);
}
