#include "gnl/get_next_line.h"
#include "p.h"

t_pd    *parsing(int fd)
{

}

int main(int ac, char **av)
{
    int i;
    int fd;
    char    *str;

    fd = open("test", O_RDONLY);
    if (fd == -1)
    {
        printf("ERROR\n");
        
    }
    if (fd)
    {
    }
    i = 0;
    while (i < 7)
    {
        str = get_next_line(fd);
        printf("%s", str);
        i++;
        free(str);
    }
    while (1);
}