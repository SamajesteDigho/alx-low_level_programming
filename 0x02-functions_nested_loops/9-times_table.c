#include "main.h"
#include <stdio.h>
/**
 * times_table - print last digit
 *
 * Description: A program that prints the alphabet
 */
void _putchar(int c)
{
putchar(c);
}
void times_table(void)
{
int i, j;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10 ; j++)
{
if(i * j >= 10)
{
_putchar(48 + ((i * j) / 10));
_putchar(48 + ((i * j) % 10));

}
else
{
_putchar(' ');
_putchar(48 + ((i * j) % 10));
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

int main(void)
{
    times_table();
    return (0);
}