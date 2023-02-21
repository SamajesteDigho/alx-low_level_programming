#include "main.h"
/**
 * _islower - Lower case
 *
 * @c: c is the parameter
 *
 * Description: A program that prints the alphabet
 *
 * Return Either 0 or 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
