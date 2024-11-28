#include <stdio.h>

/*
This Function take as a parameter an int Year, 
And Know Witch Century We Are 
Like : 2000 Year is -> 21 Century
*/

int centuryFromYear(int year) 
{
    int div;
    int mod;

    div = year / 100;
    mod = year % 100;
    if (mod)
        div += 1;
  return (div);
}

// int main()
// {
//     printf("{%d}\n", centuryFromYear(1705));
//     printf("{%d}\n", centuryFromYear(1900));
//     printf("{%d}\n", centuryFromYear(1601));
//     printf("{%d}\n", centuryFromYear(2000));
// }