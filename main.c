#include "gnl/get_next_line.h"

int main()
{
    int i;
    int fd = open("test", O_RDONLY);
    char    *str;

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