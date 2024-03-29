#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* struct hash_node_s - Node of a hash table
*
* @key: The key, string
* The key is unique in th Hashtable
* @value: The value coreesponding to a key
* @next: A pointer to the next node of the list
*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structure
*
* @size: the size of the array
* @array: an array of size @size
* Each cell of this array is a pointer to the first noed od a linked list,
* because our HashTable uses Chaining collision handline
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *update_node(hash_node_t *node, const char *key, char *value);
hash_node_t *new_node(hash_node_t *);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void delete_node(hash_node_t *node);


#endif /* _HASH_TABLES_H_ */
