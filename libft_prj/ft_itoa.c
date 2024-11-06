#include <stdlib.h>
#include <stdio.h>

int abs(int n)
{
    if (n < 0)
        return (n * -1);
    return (n);
}

int ft_power (int nb)
{
    int pow;

    pow  = 1;
    while (nb > 9 || nb < -9)
    {
        nb = nb / 10;
        pow++;
    }
    return (pow);
}

char *ft_itoi(int n)
{
    char *result;
    int lenght;

    if (n >= 0)
        lenght = ft_power(n) + 1;
    lenght = ft_power(n);
    result = malloc (lenght * sizeof(char) + 1);
    if (!result)
        return NULL;
	result[lenght] = '\0';
	lenght -= 1;
    if (n < 0)
		result[0] = '-';
    while (lenght >= 0)
    {
     	result[lenght] = abs(n % 10) + 48;
	  	n = n / 10;
		lenght--;
    }
	if (n < 0)
		result[0] = '-';
	return (result);
}

int main (int ac, char **av)
{
	if ( ac > 1)
		printf("%s\n", ft_itoi(atoi(av[1])));
	return 0;
}
