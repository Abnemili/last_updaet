#include <stdio.h>

void *ft_memcpy (void *restrict dst, void *src, size_t n)
{
    unsigned  index;

    index = 0;
    char *d = dst;
    char *s = src;
    while (s[index] && index < n)
    {
        d[index] = s[index];
        index++;
    }
    return d;
}

int main ()
{
    char *src = "hello";
    char dest[2] = "";
    printf("%s", ft_memcpy(dest,src,5));
}