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
unsigned long hash;
hash_node_t *node, *temp;
if (ht == NULL)
{
return (0);
}
hash = key_index((const unsigned char *)key, ht->size);
node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (0);
}
node->key = (char *)malloc(strlen(key) + 1);
strcpy(node->key, key);
node->value = (char *)malloc(strlen(value) + 1);
strcpy(node->value, value);
node->next = NULL;

temp = ht->array[hash];
if (ht->array[hash] == NULL)
{
ht->array[hash] = node;
return (1);
}
else
{
while (temp != NULL)
{
if (strcmp(node->key, temp->key) == 0)
{
strcpy(temp->value, node->value);
return (1);
}
temp = temp->next;
}
node->next = ht->array[hash];
ht->array[hash] = node;
return (1);
}
}
