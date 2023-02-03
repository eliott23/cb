#ifndef P_H
#define P_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct pd{
    char    *i_buffer;
    char    *so;
    char    *no;
    char    *we;
    char    *ea;
    char    **sqef;
    char    **floor;
    char    **map;
    int     *i;
}   t_pd;
void    check_fd(int fd);
#endif