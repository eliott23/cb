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
    int     i;//iterator over the string;
    int     elem[7];
    int     n;
}t_pd;
void    check_elmnt_n(char *s, int i, t_pd *pd,  int n);
void    f_perror();
void    check_fd(int fd);
void    *ft_calloc(size_t i);
char    *ft_strdup(char *s);
char    *ft_strjoin(char *s1, char *s2);
#endif