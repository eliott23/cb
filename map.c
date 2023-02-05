
#include "p.h"

void    map_p(t_pd *pd)
{
    int i = 0;
    if (!pd->i_b[pd->i])
        f_perror();
    ft_split(&pd->i_b[pd->i], '\n');
}