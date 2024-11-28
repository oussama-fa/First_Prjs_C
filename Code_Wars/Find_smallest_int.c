#include <stdio.h>

/*
This Function Find Smallest int in an array of intigers
*/

int find_smallest_int(int array[], size_t len)
{
  int   i = 0;
  int   j = 0;
  int   tmp = 0;
  while (i < len)
  {
    while (j < len)
    {
      if (array[i] >= array[j])
      {
        tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
      }
     j++; 
    }
    i++;
  }
    return array[0];
}
// int main()
// {
// 	int arr[] = {0, -1, 1};
// 	printf("{%d}\n", find_smallest_int(arr, 3));
// }