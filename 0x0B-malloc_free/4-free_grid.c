#include "main.h"
/**
 * free_grid - Function name
 * @grid: Parameter 1
 * @height: Parameter 2
 * Description: Here the description
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
grid[i] = NULL;
}
grid = NULL;
}

int **alloc_grid(int width, int height)
{
int **mat;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}

mat = (int **) malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
mat[i] = (int *) malloc(width * sizeof(int));
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
mat[i][j] = 0;
}
}
return (mat);
}


int main(void)
{
	int **grid;
	int h;
	int w;

	h = 100;
	w = 200;
	grid = alloc_grid(w, h);
	if (grid == NULL)
	{
		return (1);
	}
	free_grid(grid, h);
	return (0);
}