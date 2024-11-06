#include <stdio.h>

int ft_strncmp (char *s1, char *s2, int n)
{
    int index;

    index = 0;
    while (s1[index] && s2[index] && index < n)
    {
        if (s1[index] == s2[index])
            index++;
        else
            return (s1[index] - s2[index]);
    }
    return (s1[index] - s2[index]);
}

int main ()
{
    printf("%d", ft_strncmp("aab", "aac", 3));
    return 0;
}