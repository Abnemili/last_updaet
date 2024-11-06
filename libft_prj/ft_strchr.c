#include <stdio.h>

char *ft_strchr (char *s , int c)
{
    int index ;

    index = 0;
    while (s[index])
    {
        if (s[index] == c)
            return s + index;
        index++;
    }
    return s;
}

int main ()
{
    char *str = "hello_world";
    int c = 'e';
    printf("%s", ft_strchr(str,c));
    return 0;
}