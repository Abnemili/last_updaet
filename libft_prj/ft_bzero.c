#include <stdio.h>

void ft_bzero (void *str, size_t n)
{
    size_t index;
    char *s;

    index = 2;
    s  = str;
    while (s[index] && index < n)
    {
        s[index] = 0;
        index++;
    }
}

int main ()
{
    char str[]  = "hello";
    ft_bzero(str, 5);
    printf ("%s\n", str);
    return 0;
}