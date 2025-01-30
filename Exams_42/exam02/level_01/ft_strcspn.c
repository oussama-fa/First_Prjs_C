#include <stdio.h>
#include <string.h>


size_t  ft_strlen(const char *s)
{
    size_t  i = 0;
    while (s[i])
           i++;
    return (i);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
     size_t i = -1;
     size_t j;

     if (!s && !reject)
            return (0);
     while (s[++i])
     {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j++])
                return (i);
        }
     }
     return (ft_strlen(s));
}

int main(int ac, char **av)
{
    printf("mine : %zu\n", ft_strcspn(av[1], av[2]));
    printf("syse : %zu\n", strcspn(av[1], av[2]));
}
