#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t index;
    unsigned char *d = (unsigned char *)dest;
    unsigned const char *s = (unsigned const char *)src;

    index = 0;
    if (dest < src || d >= s + n)
    {
        while(s && index < n)    
        {
            d[index] = s[index];
            index++;
        }
    }
    else 
    {
        index = n;
        while (index > 0)
        {
          d[index - 1] = s[index - 1];
          index--;
        }
    }
    return (char *)dest;
}

int main ()
{
    char *str;
    char *src;
    char *dest = src + 2;

    
    str = ft_memmove(dest,src,3);
    printf ("%s\n", str);
    return 0;
}