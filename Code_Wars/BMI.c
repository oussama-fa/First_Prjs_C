#include <stdio.h>

// This function calcule The BMI and return "msg" for your state 

const char *bmi (int weight, double height)
{
	double	bmi;

	bmi = (double)weight / (height * height);
	if (bmi <= 18.5) return "Underweight";
	else if (bmi <= 25.0) return "Normal";
	else if (bmi <= 30.0) return "Overweight";
	return "Obese";
}

// int main()
// {
// 	printf("{%s}", bmi(175, 65));
// }