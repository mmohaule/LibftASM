#include <stdio.h>
#include "libft.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    //printf("Basic Test\n");
    //ft_putchar(89);

    int fd;

    fd = open("sample.txt", O_RDONLY);
    printf("File Descriptor: %i\n", fd);

    ft_cat(fd);

    //printf("Done..!\n");
    
    return (0);
}