#include "hash_tables.h"
/**
 * hash_table_get - Get value by key
 * @ht: Hash Table
 * @key: Key the value have to be gotten
 * Description: This function permits to get a value given the key
 * Return: The value at the given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long hash;
hash_node_t *temp;
if (ht == NULL)
{
return (NULL);
}
hash = key_index((const unsigned char *)key, ht->size);
temp = ht->array[hash];
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
