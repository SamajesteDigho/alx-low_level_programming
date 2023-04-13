#include "main.h"
/**
 * flip_bits - Function name
 * @: Parameter 1
 * Description:
 * Return:
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int diff, count;
diff = n ^ m;
count = 0;
while (diff)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
