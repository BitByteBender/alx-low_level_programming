#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
void popNode(hash_node_t *);
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned short idx = 0;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (; idx < ht->size; )
	{
	popNode(ht->array[idx]);
	idx++;
	}

	free(ht->array);
	free(ht);
}

/**
 * popNode - pops all linked list nodes
 * @h: pointer to the linked list head
 */
void popNode(hash_node_t *h)
{
	hash_node_t *thisNode, *nextNode;

	thisNode = h;

	while (thisNode != NULL)
	{
	nextNode = thisNode->next;
	free(thisNode->key);
	free(thisNode->value);
	free(thisNode);
	thisNode = nextNode;
	}

}
