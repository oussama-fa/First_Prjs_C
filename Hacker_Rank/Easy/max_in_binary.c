#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;

	int i = 1;
    while (i <= n)
	{
		int j = i + 1;
        while (j <= n)
		{
            int current_and = i & j;
            int current_or = i | j;
            int current_xor = i ^ j;

            if (current_and < k && current_and > max_and)
                max_and = current_and;
            if (current_or < k && current_or > max_or)
                max_or = current_or;
            if (current_xor < k && current_xor > max_xor)
                max_xor = current_xor;
			j++;
		}
		i++;
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}