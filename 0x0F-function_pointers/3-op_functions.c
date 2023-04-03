#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Addition function
 * @a: Parameter 1
 * @b: Parameter 2
 * Description: Function responsible of calculating the sum of 2 numbers
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: Parameter 1
 * @b: Parameter 2
 * Description: Function responsible of calculating the
    difference between 2 numbers
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: Parameter 1
 * @b: Parameter 2
 * Description: Function responsible of calculating
    the multiplication of 2 numbers
 * Return: The multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Division function
 * @a: Parameter 1
 * @b: Parameter 2
 * Description: Function responsible of calculating
    the division of 2 numbers
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
if (b <= 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Modulo function
 * @a: Parameter 1
 * @b: Parameter 2
 * Description: Function responsible of calculating
    the modulo between 2 numbers
 * Return: The modulo of a and b
 */
int op_mod(int a, int b)
{
if (b <= 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
