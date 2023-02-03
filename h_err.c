#include "p.h"
void    check_fd(int fd)
{
    if (fd == -1)
    {
        printf("Error\n");
        exit(0);
    }
}