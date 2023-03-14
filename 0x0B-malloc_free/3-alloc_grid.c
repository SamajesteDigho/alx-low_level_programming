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
int **grid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **) malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++) {
grid[i] = (int *) malloc(width * sizeof(int));
if (grid[i] == NULL)
{
return (NULL);
}
}
for (i = 0; i < height; i++) {
for (j = 0; j < width; j++) {
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
mat[i] = (int *) malloc(width * sizeof(int));
if (mat[i] == NULL)
{
return (NULL);
}
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