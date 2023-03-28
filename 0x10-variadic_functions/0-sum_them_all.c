#include "variadic_functions.h"
/**
 * sum_them_all - Function name
 * @n: The total number of arguments
 * @...: Unknown list of parameters
 * Description: This function sums all its parameters
 * Return: Returns the sum of all it parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int walker;
int result;
if (n == 0)
{
return (0);
}
va_start(args, n);
result = 0;
for (walker = 0; walker < n; walker++)
{
result += va_arg(args, int);
}
va_end(args);
return (result);
}
