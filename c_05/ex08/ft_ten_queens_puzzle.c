#include <unistd.h>
#define TABLE_SIZE 10

int	possible(char *chesstable, int i, int j)
{
	int	y;

	y = i;
	while (--y > -1)
	{
		if (chesstable[y] == j)
			return (0);
		if (chesstable[y] + (i - y) == j)
			return (0);
		if (chesstable[y] - (i - y) == j)
			return (0);
	}
	return (1);
}

int	queens_puzzle(char *chesstable, int *sol)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < TABLE_SIZE)
	{
		if (chesstable[i] < '0')
		{
			while (++j < TABLE_SIZE)
			{
				if (possible(chesstable, i, j + '0'))
				{
					chesstable[i] = j + '0';
					queens_puzzle(chesstable, sol);
					chesstable[i] = '.';
				}
			}
			return (*sol);
		}
	}
	write(1, chesstable, TABLE_SIZE);
	write(1, "\n", 1);
	return ((*sol)++);
}

int	ft_ten_queens_puzzle(void)
{
	char	chesstable[TABLE_SIZE];
	int		i;
	int		sol;

	sol = 0;
	i = -1;
	while (++i < TABLE_SIZE)
		chesstable[i] = '.';
	return (queens_puzzle(chesstable, &sol));
}
