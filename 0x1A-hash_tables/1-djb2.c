#include "hash_tables.h"
/**
 * hash_djb2 - DJB2 hashing
 * @str: The key to hash
 * Decription: This function permits to hash as string using the DJB2 algo
 * Return: hashed key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}
