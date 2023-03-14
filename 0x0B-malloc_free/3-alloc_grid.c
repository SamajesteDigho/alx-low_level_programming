#include <string.h>
#include "main.h"
/**
 * alloc_grid - Function name
 * @width: Parameter 1
 * @height: Parameter 2
 * Description: Here the description
 * Return: Returns pointer to a char
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;
grid = malloc(height * sizeof (int *) + height * width * sizeof (int));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; i++)
{
grid[i][j] = 0;
}
}
return (grid);
}

/* int **alloc_grid(int width, int height)
{
int **mat;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
mat = (int **) malloc(height * sizeof(int *));
if (mat == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
if (mat == NULL)
{
while (--i >= 0){
free(mat[i]);
}
free(mat);
}
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
*/
