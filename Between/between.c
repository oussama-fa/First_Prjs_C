#include <stdio.h>

int main()
{
	//This program shows a number between 10 and 20
	//Redo if you make a mistake
	
	int i;
	printf("Enter number bitween 10 and 20 : ");
	scanf("%d", &i);
	while (i < 10 || i > 20)
	{
		while (i < 10)
		{
		printf("it's Lower \nTRY AGAIN :");
		scanf("%d", &i);
		}
		while (i > 20)
		{
			printf("it's Higher \nTRY AGIAN :");
			scanf("%d", &i);
		}
	}
	while(i >= 10 && i <= 20)
	{
		printf("NICE WORK !\n");
		return(0);
	}
}
