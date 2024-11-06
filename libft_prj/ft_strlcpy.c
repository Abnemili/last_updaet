#include <stdio.h>

size_t ft_strlen( const char *str)
{
    size_t index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    return index;
}

size_t ft_strlcpy (char *dest, const char *src, size_t size)
{
    size_t index;

    index = 0;
    if (src == NULL)
        return 0;
    if (size > 0)
    {

    
        while (src[index] && index < size - 1)
        {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }
    size_t s_len  = ft_strlen(src);
    return s_len;
}

int main ()
{
    char *src = "abdo";
    char dest[] = "";
    size_t copied_lenght = ft_strlcpy(dest, src,  sizeof(dest));
    printf ("%zu\n", copied_lenght);
    printf("%s\n", dest);
}