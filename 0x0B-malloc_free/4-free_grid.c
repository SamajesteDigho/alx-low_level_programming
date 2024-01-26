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
