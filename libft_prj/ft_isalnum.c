#include <stdio.h>

int ft_isdigit (int c)
{
    int     index;
    
    index = 0;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ft_isalpha (int c)
{
    int     index;
    
    index = 0;
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

int ft_isalnum(int c)
{
    if ((ft_isalpha(c) || ft_isdigit(c)) == 1)
        return 1;
    else
        return 0;    
}

int main ()
{
    int c = 'e';
    printf ("%d\n", ft_isalnum(c));
    return 0;
}