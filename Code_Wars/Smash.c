#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This Function Take a Two Dynametional array and concatinate Them  

char *smash(char *words[], size_t count)
{
    size_t i;
    char *buff;

    i = 0;
    if (!*words || !count)
        return (NULL);
    buff = malloc(count + 1);
    if (!buff)
        return (NULL);
    while (i < count)
    {
        strcat(buff, words[i]);
        if ((i + 1 <= count - 1))
            strcat(buff, " ");
        i++;
    }
    return (buff);
}

// int main()
// {
//     // char *s[] = {NULL};
//     char *s[] = {"hello", "world"};
//     // char *s[] = {"singleword"};
//     printf("%s", smash(s, 2));
// }