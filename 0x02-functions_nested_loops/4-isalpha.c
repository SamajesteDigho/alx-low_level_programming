#include "main.h"
/**
 * _isalpha - Alpha character
 *
 * @c: c is the parameter
 *
 * Description: A program that prints the alphabet
 *
 * Return: Either 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
