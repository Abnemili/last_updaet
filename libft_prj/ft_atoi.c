#include <stdio.h>

int ft_atoi( const char *str)
{
    int sin;
    int res;
    int index;

    sin = 1;
    res = 0;
    index = 0;

    while ( str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
        index++;
    if (str[index] == '-')
    {
        sin = -1;
        index++;
    }
    while (str[index] >= '0' && str[index] <= '9')
    {
        res = res * 10 + (str[index] - 48);
        index++;
    }
    return res * sin;
}

int main (int ac , char **av)
{
    if (ac > 1 )
    printf("%d", ft_atoi(av[1]));
}