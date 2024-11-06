#include <stdlib.h>
#include <stdio.h> 
int count_words(char *str, char c)
{
    int i = 0;
    int x = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i])
           x++;
        while (str[i] != c && str[i])
        i++;
    }
    return x;
}


char *ptr(char *s, char c , int *k)
{
    int i;
    char *str;

    i = *k;
    while (s[i] == c)
        i++;
    *k = i;
    while (s[*k] != c && s[*k])
    {
        (*k)++;
    }
    str = malloc (*k * sizeof(char) + 1);
    if (str == 0)
        return NULL;
    int j = 0;
    while ( i < *k)
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return str;
}

char **ft_split(char  *s, char c)
{
    //! showMemory(start=272)
    int i;
    int k;

    i = 0;
    k = 0;
    if (s == 0)
        return NULL;
    int wc = count_words(s,c);
    char **new = malloc(wc * sizeof(char*) + 1);
    if (new == 0)
        return NULL;
    while (i < wc)
    {
        new[i] = ptr(s,c, &k);
        i++;
    }
    new[i] = 0;
    return new;
}

int main (int ac , char **av)
{
    if (ac != 3)
        return (1);
    char **new = ft_split(av[1],av[2][0]);
    if (!new)
    {
        printf("NULL DETECTED\n");
        return (1);
    }
    int i = 0;
    while (new[i])
    {
        printf(" --> %s \n",new[i]);
        free(new[i]);
        i++;
    }
    free(new);
}