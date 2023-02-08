#include "p.h"

t_pd    *parsing(int fd)
{
    int i;
    return (0);
}

void    fill(char *s)
{
    int i = 0;
    if (s)
    {
        while (s[i])
        {
           s[i] = 0;
            i ++;
        }    
    }
}

char    *m_read(char *name)
{
    int     i;
    int     fd;
    char    *str = NULL;
    char    *temp = NULL;
    char    *temp2 = NULL;

    fd = open(name, O_RDONLY);
    check_fd(fd);
    i = 0;
    str = NULL;
    temp = ft_calloc(sizeof(char) * 100);
    while (read(fd, temp, 100))
    {
        temp2 = ft_strdup(str);
        if (str)
            free(str);
        str = ft_strjoin(temp2, temp);
        if (temp2)
            free(temp2);
        fill(temp);
        i++;
    }
    free(temp);
    return (str);
}

int main(int ac, char **av)
{
    t_pd    pd;
    int     fd;

    if (ac != 2)
        f_perror();
    pd.i_b = m_read(av[1]);
    if (!pd.i_b)
        f_perror();
    check_elmnt_n(0, &pd, 0);
    m_parsing(&pd);
    fd = open(pd.no, O_RDONLY);
    if (fd == -1)
        f_perror();
    close(fd);
    fd = open(pd.so, O_RDONLY);
    if (fd == -1)
        f_perror();
    close(fd);
    // printf("NO:%s\n", pd.no);
    fd = open(pd.ea, O_RDONLY);
    if (fd == -1)
        f_perror();
    close(fd);
    fd = open(pd.we, O_RDONLY);
    if (fd == -1)
        f_perror();
    close(fd);
    // printf("SO:%s\n", pd.so);
    // printf("WE:%s\n", pd.we);
    // printf("EA:%s\n", pd.ea);
    // printf("n:%d\n", pd.n);
    // sleep(100);
}