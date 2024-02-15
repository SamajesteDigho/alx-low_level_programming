#include "hash_tables.h"

/**
 * hash_table_print - Print Hash Table
 * @ht: Hash Table
 * Description: Print all the entries of a Hash Table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long i, not_empty = 0;
hash_node_t *temp;
if (ht == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
if (temp != NULL)
{
while (temp != NULL)
{
if (not_empty == 1)
{
printf(", ");
}
printf("'%s': '%s'", temp->key, temp->value);
not_empty = 1;
temp = temp->next;
}
}
}
printf("}\n");
}
