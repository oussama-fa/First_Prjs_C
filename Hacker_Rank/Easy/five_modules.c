#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n;
    scanf("%d", &n);

	int i = 0;
	int sum = 0;
	while (i < 5)
	{
		sum += n%10;
		n /= 10;
		i++;
	}
	printf("sum = %d\n", sum);
	return 0;
}