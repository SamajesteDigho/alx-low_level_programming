#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Print alphabet in lowercase followed by a new line.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
