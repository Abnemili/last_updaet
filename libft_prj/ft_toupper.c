#include <stdio.h>

int ft_toupper (int c)
{
    if (c >= 97 && c < 122)
    {
        c -= 32;
    }
    return c;
}

int main ()
{
    printf("%c", ft_toupper(97));
}
