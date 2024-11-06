#include <stdio.h>

void *ft_memset (void *p, int c , size_t len )
{
    int     index;
    char    *str;

    index = 0;
    str = p;
    while (str[index] && index < len )
    {
        str[index] = c;
        index++;
    }
    return (void *)str;
}

int main ()
{
    char str[] = "hello";
   char *r =  ft_memset(str,'a',3);
    printf("%s",r);
}