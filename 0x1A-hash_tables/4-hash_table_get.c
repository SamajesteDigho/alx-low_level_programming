#include "hash_tables.h"

/**
 * hash_table_get - Get value by key
 * @ht: Hash Table
 * @key: Key the value have to be gotten
 * Description: This function permits to get a value given the key
 * Returns: The value at the given key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long hash = key_index(key, ht->size);
hash_node_t *temp = ht->array[hash];
if (temp == NULL)
{
return (NULL);
}
while (temp != NULL)
{
if (strcmp(key, temp->key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
