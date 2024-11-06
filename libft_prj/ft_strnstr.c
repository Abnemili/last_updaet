#include <stdio.h>

char *ft_strnstr(const char *s, const char *t, size_t len)
{
	size_t 	index;
	int	j;
    char *str = (char *)s;
    char *to_find = (char *)t;

	index = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[index] && index < len - 1) 
	{
		while (str[index + j] == to_find[j] && str[index + j])
			j++;
		if (to_find[j] == '\0')
			return (str + index);
		index++;
		j = 0;
	}
    return NULL;
}

int main ()
{
    char *str = "hello jossmo hhshsh";
    char *to_find = "jossmo";
    char *new = ft_strnstr(str, to_find, 12);
    printf("%s\n", new);
    return 0;
}