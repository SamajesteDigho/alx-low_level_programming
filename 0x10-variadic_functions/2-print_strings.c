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
char *current;
if (n != 0)
{
va_start(args, n);
for (walker = 0; walker < n - 1; walker++)
{
current = va_arg(args, char *);
if (current == NULL)
{
printf("(nil)");
}
else
{
printf("%s", current);
}
if (separator)
{
printf("%s", separator);
}
}
current = va_arg(args, char *);
if (current)
{
printf("%s\n", current);
}
else
{
printf("(nil)\n");
}
va_end(args);
}
else
{
printf("\n");
}
}
