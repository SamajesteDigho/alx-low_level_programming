#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print last digit
 *
 * Description: A program that prints the alphabet
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i < 3 ; i++)
{
for (j = 0; j < 4 ; j++)
{
for (k = 0; k < 6 ; k++)
{
for (l = 0; l < 10 ; l++)
{
_putchar(48 + i);
_putchar(48 + j);
_putchar(':');
_putchar(48 + k);
_putchar(48 + l);
_putchar('\n');
}
}
}
}
}