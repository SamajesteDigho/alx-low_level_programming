#include "hash_tables.h"
/**
 * shash_table_create - Create SHASH TABLE
 * @size: The size of the table to be created
 * Description: Create a structures hash table like in PHP
 * Return: The created hash table or NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int i;
shash_table_t *table = (shash_table_t *)malloc(sizeof(shash_node_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->shead = NULL;
table->stail = NULL;
table->array = (shash_node_t **)malloc(size * sizeof(shash_node_t *));
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}

/**
 * shash_table_set - Insert in table
 * @ht: Structured Hash Table
 * @key: Key to be processed
 * @value: Value to be stored associated to the key
 * Description: Permits to store the key/value pair in a highly precised place
 * Return: 1 in case of success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int hash;
shash_node_t *prev, *curr, *node;
if (ht == NULL)
return (0);
hash = key_index((const unsigned char *)key, ht->size);
node = (shash_node_t *)malloc(sizeof(shash_node_t));
if (node == NULL)
return (0);
node->key = (char *)malloc(strlen(key) + 1);
node->value = (char *)malloc(strlen(value) + 1);
strcpy(node->key, key);
strcpy(node->value, value);
node->next = NULL;
node->snext = NULL;
node->sprev = NULL;
curr = ht->array[hash];
if (curr == NULL)
ht->array[hash] = node;
else if (curr->next == NULL)
{
if (strcmp(node->key, ht->array[hash]->key) == 0)
strcpy(ht->array[hash]->value, node->value);
else if (strcmp(node->key, ht->array[hash]->key) < 0)
{
node->next = ht->array[hash];
ht->array[hash] = node;
}
else
ht->array[hash]->next = node;
}
else
{
prev = ht->array[hash];
curr = prev->next;
while (curr != NULL)
{
if (strcmp(node->key, curr->key) == 0)
{
strcpy(curr->value, node->value);
break;
}
if (strcmp(node->key, curr->key) < 0)
{
node->next = curr;
prev->next = node;
break;
}
prev = curr;
curr = curr->next;
}
prev->next = node;
}
if (ht->shead == NULL)
{
ht->shead = node;
ht->stail = node;
return (1);
}
else if (strcmp(node->key, ht->shead->key) < 0)
{
node->snext = ht->shead;
node->sprev = ht->shead->sprev;
ht->shead->sprev = node;
ht->shead = node;
return (1);
}
else
{
curr = ht->shead;
prev = curr;
while (curr != NULL)
{
if (strcmp(node->key, curr->key) == 0)
{
strcpy(curr->value, node->value);
return (1);
}
if (strcmp(node->key, curr->key) < 0)
{
node->snext = curr;
node->sprev = prev;
prev->snext = node;
curr->sprev = node;
return (1);
}
prev = curr;
curr = curr->snext;
}
prev->snext = node;
node->sprev = prev;
ht->stail = node;
return (1);
}
}

/**
 * shash_table_get - Get value
 * @ht: Structured Hash Table
 * @key: Key whose value have to be gotten
 * Description: Get the value associated to a given key.
 * Return: The value associated to the key if found or NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int hash;
shash_node_t *curr;
if (ht == NULL)
{
return (NULL);
}
hash = key_index((const unsigned char *)key, ht->size);
curr = ht->array[hash];
while (curr != NULL)
{
if (strcmp(curr->key, key) == 0)
{
return (curr->value);
}
curr = curr->next;
}
return (NULL);
}

/**
 * shash_table_print - Print sorted linked list
 * @ht: Structured Hash Table
 * Description: Print all the key values of a structured hash table in order.
 */
void shash_table_print(const shash_table_t *ht)
{
unsigned int opened = 0;
shash_node_t *curr;
if (ht == NULL)
{
return;
}
curr = ht->shead;
printf("{");
while (curr != NULL)
{
if (opened == 1)
{
printf(", ");
}
opened = 1;
printf("'%s': '%s'", curr->key, curr->value);
curr = curr->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Print Reversed
 * @ht: Structure Hash Table
 * Description: Print all the key values of a structured hash table in order.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
unsigned int opened = 0;
shash_node_t *curr;
if (ht == NULL)
{
return;
}
curr = ht->stail;
printf("{");
while (curr != NULL)
{
if (opened == 1)
{
printf(", ");
}
opened = 1;
printf("'%s': '%s'", curr->key, curr->value);
curr = curr->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Delete structured hash table
 * @ht: Structured Hash Table
 * Description: Delete a hash table completely and free the allocated memory.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *del, *curr;
if (ht == NULL)
{
return;
}
curr = ht->shead;
del = curr;
while (curr != NULL)
{
del = curr;
curr = curr->snext;
del->next = NULL;
del->snext = NULL;
del->sprev = NULL;
free(del->key);
free(del->value);
free(del);
}
free(ht->array);
free(ht);
}
