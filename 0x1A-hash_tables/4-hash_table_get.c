#include "hash_tables.h"

/**
* hash_table_get - retrieves value associated with key
* @ht: hash table were looking into
* @key: key to find
* Return: value associated with key, NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
