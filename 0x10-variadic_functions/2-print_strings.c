#include "variadic_functions.h"
/**
 * print_strings - Function name
 * @separator: The total number of arguments
 * @n: The total number of arguments
 * @...: Unknown list of parameters
 * Description: This function sums all its parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int walker;
if (n != 0)
{
va_start(args, n);
for (walker = 0; walker < n - 1; walker++)
{
printf("%s", va_arg(args, char *));
if (separator)
{
printf("%s", separator);
}
}
printf("%s\n", va_arg(args, char *));
va_end(args);
}
else
{
printf("\n");
}
}
