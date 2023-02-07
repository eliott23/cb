#include "p.h"

void    check_position(int i, int j, char **map)
{
	char    *temp;
	int     t;

	temp = map[i];
	if (!temp[j + 1] || temp[j + 1] == ' ' || temp[j + 1] == '\n')
	{
		// printf("i =%d j=%d\n", i, j);
		f_perror();
	}
	if (!j || temp[j - 1] == ' ' || temp[j - 1] == '\n')
	{
		// printf("i =%d j=%d\n", i, j);
		f_perror();
	}
	t = ft_len(map[i + 1]) - 1;
	if (!map[i + 1] || t < j || map[i + 1][j] == ' ' || map[i + 1][j] == '\n')
	{
		// printf("i =%d j=%d\n", i, j);
		f_perror();
	}
	if (!i)
	{
		// printf("i =%d j=%d\n", i, j);
		f_perror();
	}
	t = ft_len(map[i - 1]) - 1;
	if (t < j || map[i - 1][j] == ' ' || map[i - 1][j] == '\n')
	{
		// printf("i =%d j=%d\n", i, j);
		f_perror();
	}
}

//check the RGB values;