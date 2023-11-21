#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees the allocated memory for listint_t
 * @head: pointer to the head of listint_t
 * function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *thisNode = *head;
	listint_t *nextNode;

	if (*head == NULL)
		return;

	while (thisNode != NULL)
	{
	nextNode = thisNode->next;
	free(thisNode);
	thisNode = nextNode;
	}

	*head = NULL;
}
