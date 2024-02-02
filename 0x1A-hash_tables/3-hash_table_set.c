#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

hash_node_t *insertNode(const char *key, const char *vStr);
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash tabe to add/update the key/value to
 * @key: key string
 * @value: value associated with the key
 * Return: returns 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *hsh, *freshNode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	hsh = ht->array[idx];

	while (hsh != NULL)
	{
		if (strcmp(hsh->key, key) == 0)
		{
		char *nVal = strdup(value);

		if (nVal == NULL)
			return (0);
		free(hsh->value);
		hsh->value = nVal;

		return (1);
		}
		hsh = hsh->next;
	}

	freshNode = insertNode(key, value);

	if (freshNode == NULL)
		return (0);
	freshNode->next = ht->array[idx];
	ht->array[idx] = freshNode;

	return (1);
}
/**
 * insertNode - inserts a new node
 * @key: key string
 * @value: value string
 * Return: pointer to the newly created node or Null on failure
 */
hash_node_t *insertNode(const char *key, const char *value)
{
	hash_node_t *freshNode;

	freshNode = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (freshNode != NULL)
	{
	freshNode->key = strdup(key);

	if (freshNode->key == NULL)
	{
	free(freshNode);
	return (NULL);
	}

	freshNode->value = strdup(value);

	if (freshNode->value == NULL)
	{
	free(freshNode->key);
	free(freshNode);
	return (NULL);
	}
	freshNode->next = NULL;
	return (freshNode);
	}

	return (NULL);
}
