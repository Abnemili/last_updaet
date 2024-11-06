#include <stdio.h>

int ft_isdigit (int c)
{
    int     index;
    
    index = 0;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
int main ()
{
    int c = 'd';
    printf("%d\n", ft_isdigit(c));
    return 0;
}