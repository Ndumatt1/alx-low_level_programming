#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key to look for
 * Return: the value associated with the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node *get;
	unsigned long int index;
	if (!ht || !key || !(*key))
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	while (get != NULL)
	{
		if (strcmp(get->key, key) == 0)
		{
			return (get->value);
		}
		get = get->next;
	}
	return (NULL);
}
