#include <unistd.h>

void *ft_memchr (const void *s, int c, size_t n)
{   
    size_t index;

    index = 0;
    while (index < n)
    {
        if (((const unsigned  char *)s)[index] ==  (unsigned char)c)
            return (void *)(const unsigned char *)s + index;
        index++;
    }
    return NULL;
}

#include <stdio.h>

int main ()
{
    const unsigned char *str =(const unsigned char *) "hello world";
    unsigned char *result = ft_memchr(str, 'w', 11);
    printf("%s", result);
    return 0;
}