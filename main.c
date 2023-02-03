#include "p.h"

t_pd    *parsing(int fd)
{
    int i;
    return (0);
}

int main(int ac, char **av)
{
    int     i;
    int     fd;
    char    *str;
    char    *temp;
    char    *temp2;

    fd = open("test", O_RDONLY);
    check_fd(fd);
    i = 0;
    str = calloc(sizeof(char) * 101, sizeof(char) * 101);
    while (read(fd, str, 100))
    {
        printf("%s\n", str);
        i++;
        // free(str);
    }
    // while (1);
}