#include "hash_tables.h"

/**
 * hash_table_create - Create Hash Table
 * @size: Size of the hash table
 * Description: Creates a hash table of size given as parameter
 * Return: The created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
