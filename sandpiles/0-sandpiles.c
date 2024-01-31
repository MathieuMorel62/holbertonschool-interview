# include "sandpiles.h"


/**
 * print_grid - prints a 3x3 grid
 * @grid: 3x3 grid
 *
 * Return: void
 */
static void print_grid(int grid[3][3])
{
	int row, col;

	printf("=\n");
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
			if (col < 2)
				printf("%d ", grid[row][col]);
			else
				printf("%d", grid[row][col]);
		printf("\n");
	}
}

/**
 * is_stable - checks if a sandpile is stable
 * @grid: 3x3 grid
 *
 * Return: true if stable, false otherwise
 */
bool is_stable(int grid[3][3])
{
	int row, col;

	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			if (grid[row][col] > 3)
				return (false);
		}
	}
	return (true);
}

/**
 * toppling - topples a sandpile
 * @grid: 3x3 grid
 *
 * Return: void
 */
void toppling(int grid[3][3])
{
	int row, col;
	int temp_grid[3][3];

	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			temp_grid[row][col] = grid[row][col];
		}
	}
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			if (temp_grid[row][col] > 3)
			{
				grid[row][col] -= 4;
				if (row - 1 >= 0)
					grid[row - 1][col]++;
				if (row + 1 < 3)
					grid[row + 1][col]++;
				if (col - 1 >= 0)
					grid[row][col - 1]++;
				if (col + 1 < 3)
					grid[row][col + 1]++;
			}
		}
	}
}

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: 3x3 grid
 * @grid2: 3x3 grid
 *
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int row, col;

	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			grid1[row][col] += grid2[row][col];
		}
	}
	while (!is_stable(grid1))
	{
		print_grid(grid1);
		toppling(grid1);
	}
}
