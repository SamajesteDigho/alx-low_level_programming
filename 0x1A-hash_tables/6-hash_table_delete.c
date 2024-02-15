#include "hash_tables.h"
/**
 * hash_table_delete - Delete Hash Table
 * @ht: Hash Table
 * Description: Delete completely hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long i;
hash_node_t *next, *curr;
if (ht == NULL)
{
return;
}
for (i = 0; i < ht->size; i++)
{
curr = ht->array[i];
if (curr != NULL)
{
while (curr != NULL)
{
next = curr->next;
curr->next = NULL;
free(curr->key);
free(curr->value);
free(curr->next);
free(curr);
curr = next;
}
}
}
free(ht->array);
free(ht);
}
