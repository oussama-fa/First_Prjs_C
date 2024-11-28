#include <stdio.h>

/*
This Function Takes Two Paramets size and array
And Multuple an Number from Array to Him Self | (Size) Time

Like : grow(6, array{2, 2, 2, 2, 2, 2}); -> 2 * 2 * 2 * 2 * 2 * 2 = 64
*/

int grow(size_t size, const int arr[size])
{
  int res;
  int i;
  
  res = 1;
  i = 0;
  while (i < size)
  {
    res *= arr[i];
    i++;
  }
  return (res);
}

// int main()
// {
//     int arr[] = {2,2,2,2,2,2}; 
//     printf("res : %d\n", grow(6, arr));
// }