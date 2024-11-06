#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *str;
    size_t index;

    index = 0;

    str = malloc(nmemb * size);
    while (index < nmemb * size)
    {
        str[index] = 0;
        index++;
    }
    return (void *)str;
}

int main ()
{
    printf("%s\n",(char *)ft_calloc(5, 4));
}