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
    if (s1[i] || s2[i])
        return (0);
    return (1);
}

int element_id(char *s)
{
    int         i;
    static char *elmnt[] = {"NO ", "SO ", "WE ", "EA ", "F ", 0};

    i = 0;
    while (elmnt[i])
    {
        if (s_cmp(elmnt[i], s))
            return (i);
        i++;
    }
    return (-1);
}

void    m_parsing(t_pd *pd)
{
    pd->i = 0;
    while (pd->i_buffer[pd->i])
    {
        while ()
    }
}