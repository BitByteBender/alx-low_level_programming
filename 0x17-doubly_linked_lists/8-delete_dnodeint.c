#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node at an index in dlistint_t
 * @head: pointer to head pointer of dlistint_t
 * @index: index of the list where newNode should be added
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
	return (-1);
	}
	else
	{
	dlistint_t *container, *thisNode;
	unsigned short i = 0;

	if (index == 0)
	{
	container = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(container);
	return (1);
	}

	thisNode = *head;
	while (i < (index - 1) && thisNode != NULL)
	{
	thisNode = thisNode->next;
	i++;
	}

	if (thisNode == NULL || thisNode->next == NULL)
		return (-1);

	container = thisNode->next;
	thisNode->next = container->next;

	if (container->next != NULL)
		container->next->prev = thisNode;
	free(container);
	}
	return (1);
}
