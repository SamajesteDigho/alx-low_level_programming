#include "variadic_functions.h"
/**
 * print_all - Function name
 * @format: Arguments format
 */
void print_all(const char * const format, ...)
{
va_list args;
int walker;
if (format)
{
walker = 0;
va_start(args, format);
while (format[walker + 1] != '\0')
{
_printer(format[walker], args, 1);
walker++;
}
_printer(format[walker], args, 0);
va_end(args);
}
printf("\n");
}
/**
 * get_string - Function name
 * @value: Arguments format
 * Return: Returns a string
 */
char *get_string(char *value)
{
if (value == NULL)
return ("(nil)");
return (value);
}
/**
 * _printer - Function name
 * @c: Arguments format
 * @args: Arguments format
 * @end: yes - 0, no - 1
 */
void _printer(char c, va_list args, int end)
{
int i = 0;
switch (c)
{
case 'c': printf("%c", va_arg(args, int));
i = 1;
break;
case 'i': printf("%d", va_arg(args, int));
i = 1;
break;
case 'f': printf("%f", va_arg(args, double));
i = 1;
break;
case 's': printf("%s", get_string(va_arg(args, char *)));
i = 1;
break;
}
if (end == 1 && i == 1)
printf(", ");
}
