#include "function_pointers.h"
/**
 * print_name - Function name
 * @name: Parameter 1
 * @(*f): parameter 2
 * Description: Describing the function
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
