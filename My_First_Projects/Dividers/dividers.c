#include <stdio.h>

int main()
{
	//Commonalities
    int n;

    // Input a positive integer
    printf("Enter a positive number : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return (1);
    }

    printf("Divisors of %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}

