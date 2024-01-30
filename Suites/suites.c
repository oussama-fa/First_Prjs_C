#include <stdio.h>

int main()
{
	//Suites In Maths 
    int n1, n2, i, U0, Un;
    int n = 1;
    
        printf("Enter U0 = ");
            scanf("%d", &U0);
        printf("Enter : Un+1 for example:(4*Un+10)\n");
        printf("num1 = ");
            scanf("%d", &n1);    
        printf("num2 = ");
            scanf("%d", &n2);
            
        for(i = 1; i <= n; i++){
            Un = n1 * U0 + n2;
        }
        printf("%dUn + (%d) = %d",n1, n2, Un);
        
    return 0;
}
