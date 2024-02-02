#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - prints hash table using a specfic format
 * @ht: hash table
 * Return: if ht is NULL, nothing gets printed otherwise print
 * the formatted hash table Order: array; list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned short idx = 0, counter = 0;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	putchar('{');

	for (; idx < ht->size; )
	{
	hash_node_t *hsh = ht->array[idx];

	while (hsh != NULL)
	{
		if (counter > 0)
		{
		putchar(',');
		putchar(' ');
		}
		printf("'%s': '%s'", hsh->key, hsh->value);
		counter++;
		hsh = hsh->next;
	}
	idx++;
	}
	putchar('}');
	putchar('\n');
}
