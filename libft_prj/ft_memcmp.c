#include <stdio.h>

int  ft_memcmp (const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    const unsigned char *str1 = s1;
    const unsigned char *str2 = s2;

    while (str1[i] && str2[i] && i < n - 1)
    {
        if (str1[i] == str2[i])
            i++;
    }
    return (str1[i] - str2[i]);
}

int main ()
{
    printf("%d", ft_memcmp("aab", "aac", 3));
    return 0;
}