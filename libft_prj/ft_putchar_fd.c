#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		write (1, "EROOR", 5);
	write(fd, &c, fd);
}

int main ()
{
	int fd = open("text.txt", O_RDWR);
	char c = 't';
	ft_putchar_fd(c,fd);
	return 0;
}
