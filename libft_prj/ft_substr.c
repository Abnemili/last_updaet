#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t index;

    index = 0;
    char *sub = malloc(len * sizeof(char) + 1);
    if (!sub)
        return  NULL;
    while (index < len)
    {
        sub[index] = s[start];
        index++;
        start++;
    }
    sub[index] = '\0';
    return sub;
}

int main ()
{
    const char *s = "hell world how areo you";
    printf ("%s", ft_substr(s,8,0));
    return 0;
}