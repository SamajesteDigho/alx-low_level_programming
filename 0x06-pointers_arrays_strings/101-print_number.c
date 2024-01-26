#include "main.h"
/**
 * print_number - resetting
 * @n : parameter
 * Description: Describing the function
 */
void print_number(int n)
{
int val, degree, index;
char res[];
val = n;
index = 0;
degree = 10;
res[0] = "";
while ((val / degree) != 0)
{
res[index] = val - (val / degree);
index++;
val = val / degree;
degree = degree * 10;
}
printf("%s", res);
}

void _putchar(int c)
{
putchar(c);
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}