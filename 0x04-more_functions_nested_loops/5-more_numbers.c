#include "main.h"
/**
 * more_numbers: Short description
 * Description : Fonction full description
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
{
_putchar(48 + (j / 10));
}
_putchar(48 + (j % 10));
}
_putchar('\n');
}
}
