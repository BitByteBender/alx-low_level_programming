#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at an index in a listint_t
 * @head: pointer to head pointer of listint_t
 * @index: index of the list where new node should be added
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
	return (-1);
	}
	else
	{
	listint_t *valHolder, *thisNode;
	unsigned short i = 0;

	if (index == 0)
	{
	valHolder = *head;
	*head = (*head)->next;
	free(valHolder);
	return (1);
	}

	thisNode = *head;
	if (thisNode != NULL)
	{
	while (i < (index - 1))
	{
	thisNode = thisNode->next;
	i++;
	}
	}
	else
	{
		return (-1);
	}

	valHolder = thisNode->next;
	thisNode->next = valHolder->next;
	free(valHolder);
	}
	return (1);
}
