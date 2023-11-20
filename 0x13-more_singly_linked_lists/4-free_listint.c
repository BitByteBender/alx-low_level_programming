#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees the allocated memory for listint_t
 * @head: pointer to the head of listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *thisNode = head;
	listint_t *nextNode;

	while (thisNode != NULL)
	{
	nextNode = thisNode->next;
	free(thisNode);
	thisNode = nextNode;
	}
}
