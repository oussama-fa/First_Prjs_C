#include <stdio.h>
// This Function return addition of array
double sum_array(const double *values, size_t count)
{
	size_t	i;
	double	res;

	if (!values)
		return (0);
	i = 0;
	res = 0;
	while (i < count && count)
	{
		res += values[i];
		i++;
	}
	return (res);
}

// int main()
// {
// 	double arr[] = {1, 2, -4};
// 	printf("%f", sum_array(arr, 3));
// }