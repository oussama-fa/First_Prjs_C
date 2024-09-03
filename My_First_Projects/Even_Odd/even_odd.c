#include <stdio.h>
 
int main()
{
	//Even or Odd
   int nbr;
   
   printf("Entre number :\n");
   scanf("%d", &nbr);
   if (nbr % 2 == 0)
      printf("Even\n");
   else
      printf("Odd\n");
   return 0;
}
