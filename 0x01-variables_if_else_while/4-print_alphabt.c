#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Print alphabet in lowercase except q and e.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
putchar('\n');
return (0);
}
