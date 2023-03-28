#include "variadic_functions.h"

/**
 * get_string - Function name
 * @value: Arguments format
 * Description: This function returns a string accordingly
 * Return: Returns a string
 */
char *get_string(char *value)
{
if (value == NULL)
{
return ("(nil)");
}
return value;
}

/**
 * print_all - Function name
 * @format: Arguments format
 * @...: Unknown list of parameters
 * Description: This function sums all its parameters
 */
void print_all(const char * const format, ...)
{
va_list args;
int walker;
char *current;
walker = 0;
va_start(args, format);
while (format[walker + 1] != '\0')
{
switch(format[walker])
{
case 'c' :
printf("%c", va_arg(args, int));
printf(", ");
break;
case 'i' :
printf("%d", va_arg(args, int));
printf(", ");
break;
case 'f' :
printf("%f", va_arg(args, double));
printf(", ");
break;
case 's' :
current = va_arg(args, char *);
printf("%s", get_string(current));
printf(", ");
break;
}
walker++;
}
switch(format[walker])
{
case 'c' :
printf("%c", va_arg(args, int));
break;
case 'i' :
printf("%d", va_arg(args, int));
break;
case 'f' :
printf("%f", va_arg(args, double));
break;
case 's' :
current = va_arg(args, char *);
printf("%s", get_string(current));
break;
}
printf("\n");
}

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
