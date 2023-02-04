#include "p.h"

int s_cmp(char  *s1, char *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    if (!s2[i])
        return (0);
    return (1);
}

int element_id(char *s)
{
    int         i;
    static char *elmnt[] = {"NO ", "SO ", "WE ", "EA ", "F ", "C ", 0};

    i = 0;
    while (elmnt[i])
    {
        if (s_cmp(elmnt[i], s))
            return (i);
        i++;
    }
    f_perror();
    return (-1);
}

void    store_path(t_pd *pd, char *path, int e)
{
    if (e == 0)
        pd->no = path;
    if (e == 1)
        pd->so = path;
    if (e == 2)
        pd->we = path;
    if (e == 3)
        pd->ea = path;
    if (e == 4)
        pd->floor = ft_split(path, ',');
    if (e == 5)
        pd->sqef = ft_split(path, ',');
}

void    s_dup(char *s, t_pd *pd, int e)
{
    int     i;
    int     j;
    char    *path;

    i = 0;
    while (s[i] && s[i] != '\n')
        i++;
    path = malloc(sizeof(char) * (i + 1));
    if (!path)
        f_perror();
    while (j < i)
    {
        path[j] = s[j];
        j++;
    }
    path[j] = 0;
    printf("here\n");
    store_path(pd, path, e);
}

void    m_parsing(t_pd *pd)
{
    int     e;
    char    *path;

    pd->i = 0;
    e = 0;
    while (pd->i_b[pd->i])  // add a conditon about the reached number of elmnt;
    {
        while (pd->i_b[pd->i] == '\n')
            pd->i++;
        e = element_id((pd->i_b) + pd->i);
        check_elmnt_n(1, pd, e);
        while (pd->i_b[pd->i])
        {
            if (pd->i_b[pd->i] == ' ')
            {
                pd->i++;
                if (!(pd->i_b[pd->i]))
                    exit(0);
        printf("lol this is the e %d\n", e);
                s_dup(pd->i_b + pd->i, pd, e);
                exit(0);
            }
            pd->i++;
        }
    }
}