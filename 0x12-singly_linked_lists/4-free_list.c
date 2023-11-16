#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the allocated memory for list_t
 * @head: pointer to head of list_t
 */
void free_list(list_t *head)
{
	list_t *thisNode = headi, *nextNode;

	while (thisNode != NULL)
	{
	nextNode = thisNode->next;
	free(thisNode->str);
	free(thisNode);
	thisNode = nextNode;
	}
}
