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
_putchar(a[i][j]);
}
_putchar('\n');
}
}


int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}