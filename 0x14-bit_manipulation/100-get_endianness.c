#include "main.h"
/**
 * get_endianness - Function name
 * @: Parameter 1
 * Description: Describe
 * Return: An integer
 */
int get_endianness(void)
{
int num;
char *byte;
num = 1;
byte = (char *) &num;
if (*byte == 1)
{
return (1);
}
else
{
return (0);
}
}
