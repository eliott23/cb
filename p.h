#ifndef P_H
#define P_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct pd{
    char    *i_b;
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
int check_empty(char *s);
int m_srch(char *s, char c, char lim);
void    map_p(t_pd *pd);
void    skip_to_next(int m, t_pd *pd);
void    m_parsing(t_pd *pd);
char    **ft_split(char const *s, char c);
void    check_elmnt_n(int i, t_pd *pd,  int n);
void    f_perror();
void    check_fd(int fd);
void    *ft_calloc(size_t i);
char    *ft_strdup(char *s);
char    *ft_strjoin(char *s1, char *s2);
#endif