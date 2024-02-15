#ifndef HASH_TAB
#define HASH_TAB

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 50000

typedef struct HT_item
{
char *key;
char *value;
} HT_item;

typedef struct LinkedList
{
HT_item *item;
struct LinkedList *next;
} LinkedList;


typedef struct HashTable
{
HT_item **items;
LinkedList **overflow_buckets;
int size;
int count;
} HashTable;

unsigned long hash_function(char *key);
HT_item *create_item(char *key, char *value);
HashTable *create_table(int size);
void free_item(HT_item *item);
void free_table(HashTable *table);
void print_table(HashTable *table);
void ht_insert(HashTable *table, char *key, char *value);
LinkedList *allocate_list();
LinkedList *linkedlist_insert(LinkedList *list, HT_item *item);
HT_item *linkedlist_remove(LinkedList *list);
void free_linkedlist(LinkedList *list);
LinkedList **create_overflow_buckets(HashTable *table);
void free_overflow_buckets(HashTable *table);
void handle_collision(HashTable *table, unsigned long index, HT_item *item);
char *ht_search(HashTable *table, char *key);
void print_search(HashTable *table, char *key);
void ht_delete(HashTable *table, char *key);
int main(int argc, char *argv);

#endif /* HASH_TAB */
