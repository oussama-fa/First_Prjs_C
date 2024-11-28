#include <stdio.h>
#include <string.h>
#include <ctype.h>

// This Function Take a String and Capitalize The First Charater in a Word

char	*to_jaden_case (char *jaden_case, const char *string)
{
	int	i;
	int	j;
	int	rep;

	i = 0;
	j = 0;
	rep = 0;
	while (string[rep])
	{
		jaden_case[rep] = string[rep];
		rep++;
	}
	jaden_case[rep] = '\0';
	while (jaden_case[i])
	{
		if (jaden_case[i] >= 'A' && jaden_case[i] <= 'Z')
			jaden_case[i] += 32;
		i++;
	}
	if (jaden_case[0] >= 'a' && jaden_case[0] <= 'z')
		jaden_case[0] -= 32;
	while (jaden_case[j])
	{
		if (!isalpha((char)jaden_case[j - 1]) && !(jaden_case[j - 1] == '\''))
			if (jaden_case[j] >= 'a' && jaden_case[j] <= 'z')
				jaden_case[j] -= 32;
		j++; 
	}
	return (jaden_case);
}

// int main()
// {
// 	char s[] = "How can mirrors be real if our eyes aren't real";
// 	char str[] = "How can mirrors be real if our eyes aren't real";
// 	printf("%s", to_jaden_case(s, str));
// }