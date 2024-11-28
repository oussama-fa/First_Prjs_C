#include <stdbool.h>
#include <stdio.h>

/*
This Function Takes class_points for all Student and compare with your Note if is a grater than Average Class 
*/

bool better_than_average(const int class_points[], int class_size, int your_points)
{
	int	i;
	int	res;
	int tmp;

	i = 0;
	res = 0;
	tmp = 0;
	while (i < class_size)
	{
		res += class_points[i];
		i++;
	}
	tmp = res / class_size;
	if (tmp >= your_points)
		return (false);
	else
		return (true);
}

// int main()
// {
// 	int arr[] = {9, 90, 29, 32, 10, 55, 52, 39, 64, 42, 17, 66, 64, 9, 3, 61, 60, 74, 0, 79, 52, 48, 83, 47, 29, 42, 19, 43, 99, 72, 88, 74, 62, 16, 5, 38, 37, 24, 77, 0, 32, 94, 32};
// 	printf("1 = true ; 0 = false {%d}", better_than_average(arr, 42, 45));
// }