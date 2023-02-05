#include "p.h"

// void    rm_spaces(char *s)
// {
//     int i;

//     i = 0;
//     if (s)
//     {
//         while (s[i])
//     }
// }
int check_empty(char *s)
{
    int i;

    i = 0;
    while (s[i] && s[i] == ' ')
        i++;
    if (s[i] == '\n')
        return (1);
    return (0);
}

void    map_p(t_pd *pd)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!pd->i_b[pd->i])
        f_perror();
    pd->map = ft_split(&pd->i_b[pd->i], '\n');
    // while (pd->map[i])
    // {
    //     if (!m_srch(&pd->map[i][j], '1') && !m_srch(&pd->map[i][j], '0'))
    // }
    i = 0;
    while (pd->map[i])
    {
        printf("%s\n", pd->map[i]);
        i++;
    }
}