#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at an index in a listint_t
 * @head: pointer to head pointer of listint_t
 * @idx: index of the list where new node should be added
 * @n: value to be inserted in the new node
 * Return: the address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *thisNode;
	unsigned short i;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t *) * (idx + n));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
	newNode->next = *head;
	return (*head = newNode);
	}

	thisNode = *head;
	if (thisNode != NULL)
	{
	while (i <= (idx - 1))
	{
	thisNode = thisNode->next;
	i++;
	}
	}
	else
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = thisNode->next;
	thisNode->next = newNode;

	return (newNode);
}
