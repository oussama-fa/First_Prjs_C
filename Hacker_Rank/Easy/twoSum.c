#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    int j = 0;
    int *tab = malloc(sizeof(int) * 2);
    while (i < numsSize)
    {
        j = 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                tab[0] = i;
                tab[1] = j;
                return (tab);
            }
            j++;
        }
        i++;
    }
    return (0);
}


int main()
{
	int tab[2] = {0, 0};
    int arr[4] = {2,7,11,15};
   
    int *res = twoSum(arr, 4, 9, tab); 
    printf("%d %d\n", res[0], res[1]);
    free(res);
}
