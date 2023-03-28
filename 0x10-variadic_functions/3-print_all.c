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
_printer(format[walker], args, ", ");
walker++;
}
_printer(format[walker], args, "");
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
void _printer(char c, va_list args, char* sep)
{
switch (c)
{
case 'c': printf("%c%s", va_arg(args, int), sep);
break;
case 'i': printf("%d%s", va_arg(args, int), sep);
break;
case 'f': printf("%f%s", va_arg(args, double), sep);
break;
case 's': printf("%s%s", get_string(va_arg(args, char *)), sep);
break;
}
}

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}