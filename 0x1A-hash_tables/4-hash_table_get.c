#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key looking for
 * Return: value associated with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht != NULL || key != NULL)
	{
		unsigned long idx;
		hash_node_t *hsh;

		idx = key_index((const unsigned char *)key, ht->size);
		hsh = ht->array[idx];

		while (hsh != NULL)
		{
		if (strcmp(hsh->key, key) == 0)
			return (hsh->value);

		hsh = hsh->next;
		}

		return (NULL);
	}
	else
		return (NULL);
}
