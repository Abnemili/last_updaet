#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index])
        index++;
    return index;
}

char *ft_strdup(const char *s)
{
    int index;

    index = 0;
    char *str = malloc(ft_strlen((char *)s) * sizeof (char) + 1);
    if (!str)
        return NULL;
    while (s[index])
    {
        str[index] = s[index];
        index++;
    }
    str[index] = '\0';
    return str;
}

int main ()
{
    char *str = ft_strdup("hello");
    printf ("%s\n", str);
    return 0;
}