#include "p.h"

int m_srch(char *s, char c, char lim)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    while (s[i] && s[i] != lim)
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}