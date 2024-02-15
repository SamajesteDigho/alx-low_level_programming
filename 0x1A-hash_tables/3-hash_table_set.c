#include "hash_tables.h"

/**
 * hash_table_set - Add element
 * @ht: Hash Table
 * @key: Key to hash
 * @value: Value associated to key
 * Description: Add a new item to the hash table
 * Return: 1 if succes 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long hash = key_index(key, ht->size);
hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));
hash_node_t *temp = ht->array[hash];
if (node == NULL)
{
return (0);
}
node->key = (char *) malloc(strlen(key) + 1);
strcpy(node->key, key);
node->value = (char *) malloc(strlen(value) + 1);
strcpy(node->value, value);
node->next = NULL;
if (ht->array[hash] == NULL)
{
ht->array[hash] = node;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = node;
}
return (1);
}
