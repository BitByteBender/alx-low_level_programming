#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to a newly created hash table
 * Or
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_t != NULL)
	{
	unsigned short i;

	hash_t->size = size;
	hash_t->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
	{
	free(hash_t);
	return (NULL);
	}
	i = 0;

	for (; i < size; )
	{
	hash_t->array[i] = NULL;
	i++;
	}
	return (hash_t);
	}

	return (NULL);
}
