#include "3-calc.h"
/**
 * get_op_func - Modulo function
 * @s: Parameter 1
 * Description: Function responsible of calculating
    the modulo between 2 numbers
 * Return: The modulo of a and b
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0] && strlen(s) == strlen(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
