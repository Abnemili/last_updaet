#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr_fd (char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main ()
{
    int fd = open("text.txt",O_RDWR);
    char *str = "hello";
    ft_putstr_fd(str,fd);
}