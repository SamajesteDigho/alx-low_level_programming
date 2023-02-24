#include "main.h"
/**
 * print_triangle - Short description
 * @size : Function parameter
 * Description : Fonction full description
 * Return: Nothing
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < (size - 1 - i))
{
_putchar(32);
}
else
{
_putchar(35);
}
}
_putchar('\n');
}
}
