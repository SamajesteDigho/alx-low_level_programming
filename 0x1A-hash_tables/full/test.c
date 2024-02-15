#include "test.h"

unsigned long hash_function(char *key)
{
int i;
unsigned long hash = 0;
for (i = 0; i < key[i]; i++)
{
hash += key[i];
}
return (hash % CAPACITY);
}

HT_item *create_item(char *key, char *value)
{
HT_item *item = (HT_item *)malloc(sizeof(HT_item));
item->key = (char *)malloc(strlen(key) + 1);
item->value = (char *)malloc(strlen(value) + 1);
strcpy(item->key, key);
strcpy(item->value, value);
return (item);
}

HashTable *create_table(int size)
{
int i;
HashTable *table = (HashTable *)malloc(sizeof(HashTable));
table->size = size;
table->count = 0;
table->items = (HT_item **)calloc(table->size, sizeof(HT_item *));
for (i = 0; i < size; i++)
{
table->items[i] = NULL;
}
table->overflow_buckets = create_overflow_buckets(table);
return (table);
}

void free_item(HT_item *item)
{
free(item->key);
free(item->value);
free(item);
}

void free_table(HashTable *table)
{
int i;
for (i = 0; i < table->size; i++)
{
HT_item *item = table->items[i];
if (item != NULL)
{
free(item);
}
}
free_overflow_buckets(table);
free(table->items);
free(table);
}

void print_table(HashTable *table)
{
int i;
printf("\nHash Table\n----------------------\n");
for (i = 0; i < table->size; i++)
{
if (table->items[i] != NULL)
{
printf("Index: %d, Key: %s, Value: %s\n",
i, table->items[i]->key, table->items[i]->value);
}
}
printf("----------------------\n");
}

void ht_insert(HashTable *table, char *key, char *value)
{
unsigned long hash = hash_function(key);
HT_item *item = create_item(key, value);
HT_item *curr = table->items[hash];
if (curr == NULL)
{
if (table->count == table->size)
{
printf("Insert Error: Hash Table is full\n");
free_item(item);
return;
}
table->items[hash] = item;
table->count += 1;
}
else
{
if (strcmp(curr->key, key) == 0)
{
strcpy(table->items[hash]->value, value);
return;
}
else
{
handle_collision(table, hash, item);
return;
}
}
}

LinkedList *allocate_list()
{
LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
return (list);
}

LinkedList *linkedlist_insert(LinkedList *list, HT_item *item)
{
if (!list)
{
LinkedList *head = allocate_list();
head->item = item;
head->next = NULL;
list = head;
return (list);
}
else if (list->next == NULL)
{
LinkedList *node = allocate_list();
node->item = item;
node->next = NULL;
list->next = node;
return (list);
}

LinkedList *temp = list;
while (temp->next != NULL)
{
temp = temp->next;
}
LinkedList *node = allocate_list();
node->item = item;
node->next = NULL;
temp->next = node;
return (list);
}

HT_item *linkedlist_remove(LinkedList *list)
{
if (!list)
{
return (NULL);
}
if (!list->next)
{
return (NULL);
}
LinkedList *node = list->next;
LinkedList *temp = list;
temp->next = NULL;
list = node;
HT_item *it = NULL;
memcpy(temp->item, it, sizeof(HT_item));
free(temp->item->key);
free(temp->item->value);
free(temp->item);
free(temp);
return (it);
}

void free_linkedlist(LinkedList *list)
{
LinkedList *temp = list;
while (list)
{
temp = list;
list = list->next;
free(temp->item->key);
free(temp->item->value);
free(temp->item);
free(temp);
}
}

LinkedList **create_overflow_buckets(HashTable *table)
{
int i;
LinkedList **buckets = (LinkedList **)calloc(table->size,
sizeof(LinkedList *));
for (i = 0; i < table->size; i++)
{
buckets[i] = NULL;
}
return (buckets);
}

void free_overflow_buckets(HashTable *table)
{
int i;
LinkedList **buckets = table->overflow_buckets;
for (i = 0; i < table->size; i++)
{
free_linkedlist(buckets[i]);
}
free(buckets);
}

void handle_collision(HashTable *table, unsigned long index, HT_item *item)
{
LinkedList *head = table->overflow_buckets[index];
if (head == NULL)
{
head = allocate_list();
head->item = item;
table->overflow_buckets[index] = head;
return;
}
else
{
table->overflow_buckets[index] = linkedlist_insert(head, item);
return;
}
}

char *ht_search(HashTable *table, char *key)
{
unsigned long hash = hash_function(key);
HT_item *item = table->items[hash];
LinkedList *head = table->overflow_buckets[hash];
if (item != NULL)
{
if (strcmp(item->key, key) == 0)
{
return item->value;
}
if (head == NULL)
{
return (NULL);
}
item = head->item;
head = head->next;
}
return (NULL);
}

void print_search(HashTable *table, char *key)
{
char *val;
if ((val = ht_search(table, key)) == NULL)
{
printf("Key: %s does not exist\n", key);
return;
}
else
{
printf("Key: %s, Value: %s\n", key, val);
}
}

void ht_delete(HashTable *table, char *key)
{
unsigned long hash = hash_function(key);
HT_item *item = table->items[hash];
LinkedList *head = table->overflow_buckets[hash];
if (item == NULL)
{
return;
}
else
{
if (head == NULL && strcmp(item->key, key) == 0)
{
table->items[hash] = NULL;
free_item(item);
table->count -= 1;
return;
}
else if (head != NULL)
{
if (strcmp(item->key, key) == 0)
{
free_item(item);
LinkedList *node = head;
head = head->next;
node->next = NULL;
table->items[hash] = create_item(node->item->key, node->item->value);
free_linkedlist(node);
table->overflow_buckets[hash] = head;
return;
}

LinkedList *curr = head;
LinkedList *prev = NULL;
while (curr)
{
if (strcmp(curr->item->key, key) == 0)
{
if (prev == NULL)
{
free_linkedlist(head);
table->overflow_buckets[hash] = NULL;
return;
}
else
{
prev->next = curr->next;
curr->next = NULL;
free_linkedlist(curr);
table->overflow_buckets[hash] = head;
return;
}
}
curr = curr->next;
prev = curr;
}
}
}
}

int main(int argc, char *argv)
{
HashTable *ht = create_table(CAPACITY);
ht_insert(ht, (char *)"1", (char *)"First address");
ht_insert(ht, (char *)"2", (char *)"Second address");
ht_insert(ht, (char *)"Hel", (char *)"Third address");
ht_insert(ht, (char *)"Cau", (char *)"Fourth address");
print_search(ht, (char *)"1");
print_search(ht, (char *)"2");
print_search(ht, (char *)"3");
print_search(ht, (char *)"Hel");
print_search(ht, (char *)"Cau");
print_table(ht);
ht_delete(ht, (char *)"1");
ht_delete(ht, (char *)"Cau");
print_table(ht);
free_table(ht);
return (0);
}
