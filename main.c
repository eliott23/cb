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
    char    *str;
    char    *temp;
    char    *temp2;

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
    return (str);
}

int main(int ac, char **av)
{
    if (ac != 2)
        f_perror();
    t_pd    pd;

    pd.i_buffer = m_read(av[1]);
    printf("%s\n", pd.i_buffer);
    // free(pd.i_buffer);
    while (1);
}