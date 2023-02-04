#include "p.h"

void    check_elmnt_n(int i, t_pd *pd,  int n)
{
    if (i == 0)
    {
        while (i < 7)
        {
            pd->elem[i] = 0; 
            i++;
        }
    }
    else
    {
        if (pd->elem[n] == n + 1)
            f_perror();
        pd->elem[n] = n + 1;
    }
}

void    check_fd(int fd)
{
    if (fd == -1)
    {
        printf("Error\n");
        exit(0);
    }
}