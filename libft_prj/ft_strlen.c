#include <stdio.h>

int ft_strlen(const char *str)
{
    int     index;

    index = 0;
    while (str[index])
        index++;
    return index;
}

int main ()
{
    char *str = "abd el moula";
    printf("%d\n", ft_strlen(str));
    return 0;
}