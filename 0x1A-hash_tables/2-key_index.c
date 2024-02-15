#include "hash_tables.h"
/**
 * key_index - Get reframed hash
 * @key: Key to be hashed
 * @size: Size of the hash table
 * Description: Reposition hash gotten by djb2 to fit the size range
 * Return: Repositionned key
*/
unsigned long int key_index(const char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
