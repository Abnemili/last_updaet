#include <stdio.h>

size_t ft_strlen(char *str)
{
    size_t index;

    index = 0;
    while (str[index])
        index++;
        return index;
}

size_t ft_strlcat (char *dest,  char *src, size_t size)
{
    size_t i;
    size_t dest_len = ft_strlen(dest);
    i = 0;
    if (dest == NULL)
        return 0;
    if (src == NULL)
        return dest_len;
    if (dest_len >= size)
		return (size + ft_strlen(src));
    while (src[i] &&   dest_len + i < size - 1 )
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest_len + ft_strlen(src);
}

int main ()
{
    char dest[20] = "jjjjj";

    size_t len_concatinate  = ft_strlcat(dest, "hhh",64);
    printf ("%zu\n", len_concatinate);
    printf ("%s\n", dest);
        printf("++++++\n");
}