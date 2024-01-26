#include "main.h"
/**
 * print_chessboard - Function name
 * @a: Parameter 1
 * Description: Function description
 */
void print_chessboard(char (*a)[8])
{
int i, j, n1, n2;
n1 = sizeof(a[0]);
n2 = 8;
for (i = 0; i < n1; i++)
{
for (j = 0; j < n2; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
