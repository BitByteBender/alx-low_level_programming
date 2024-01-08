#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees doubly linked dlistint_t list
 * @head: pointer to the dlistint_t head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	while (head != NULL)
	{
	nextNode = head->next;
	free(head);
	head = nextNode;
	}
}
