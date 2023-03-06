#include "main.h"
/**
 * print_diagsums - Function name
 * @a: Parameter 1
 * @size: Parameter 2
 * Description: Function description
 */
void print_diagsums(int *a, int size)
{
int i, j, l_diag, r_diag;
l_diag = 0;
r_diag = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
l_diag += (&a[i])[j];
printf("%d\n", (&a[i])[j]);
/*r_diag += (&a[(size - 1 - i) % size])[(size - 1 - i) % size];*/
}
}

printf("%d, %d\n", l_diag, r_diag);
}


/*int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}*/
