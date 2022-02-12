#include <stdio.h>

		//0,1,2,  3,4,5,  6,7,8
char sudo[9][9]={{5,3,0,  0,7,0,  0,0,0},//0
	  	 {6,0,0,  1,9,5,  0,0,0},//1
		 {0,9,8,  0,0,0,  0,6,0},//2

		 {8,0,0,  0,6,0,  0,0,3},//3
		 {4,0,0,  8,0,3,  0,0,1},//4
		 {7,0,0,  0,2,0,  0,0,6},//5

                 {0,6,0,  0,0,0,  2,8,0},//6
                 {0,0,0,  4,1,9,  0,0,5},//7
                 {0,0,0,  0,8,0,  0,7,9}};//8

int	sol = 1;

int	is_possible(int y,int  x, int n)
{
	int	i;
	int	j;

	for (i = 0; i < 9; i++)
		if (sudo[y][i] == n)
			return (0);
	for (i = 0; i < 9; i++)
		if (sudo[i][x] == n)
			return (0);
	int	xb = (x / 3) * 3;
	int	yb = (y / 3) * 3;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (sudo[yb + i][xb + j] == n)
				return (0);
	return (1);
}

void	print_grid(void)
{
	int	i;
	int	j;
	for (i = 0; i < 9; i++)
	{
		if (i % 3 == 0)
			printf("\n");
		for (j = 0; j < 9; j++)
		{
			if (j % 3 == 0)
				printf("  ");
			printf("%d ", sudo[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	char	why;
	int	n;
	int	y;
	int	x;
	
	for (y = 0; y < 9; y++)
	{
		for (x = 0; x < 9; x++)
		{
			if (sudo[y][x] == 0)
			{
				for (n = 1; n < 10; n++)
				{
					if (is_possible(y, x, n))
					{
						sudo[y][x] = n;
						main();
						sudo[y][x] = 0;
					}
				}
				return (0);
			}
		}
	}
	printf("Soluction nº: %d", sol++);
	print_grid();
	scanf("%c", &why);
}
