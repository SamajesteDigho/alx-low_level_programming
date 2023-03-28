#include "variadic_functions.h"
/**
 * print_numbers - Function name
 * @separator: The total number of arguments
 * @n: The total number of arguments
 * @...: Unknown list of parameters
 * Description: This function sums all its parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int walker;
if (n != 0)
{
va_start(args, n);
for (walker = 0; walker < n - 1; walker++)
{
printf("%d", va_arg(args, int));
if (separator)
{
printf("%s", separator);
}
}
printf("%d\n", va_arg(args, int));
va_end(args);
}
else
{
printf("\n");
}
}

int main(void)
{
	print_numbers("; ", 0);
	return (0);
}