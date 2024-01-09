#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts newNode at an idx in dlistint_t
 * @h: pointer to head pointer of dlistint_t
 * @idx: index of the list where newNode should be added
 * @n: value to be inserted in the newNode
 * Return: the address of newNode or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *thisNode;
	unsigned short i = 0;

	if (h == NULL)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t *) * (idx + n));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
	newNode->next = *h;
	newNode->prev = NULL;
	return (*h = newNode);
	}

	thisNode = *h;
	if (thisNode != NULL)
	{
	while (i < (idx - 1))
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
	newNode->prev = thisNode;
	thisNode->next = newNode;

	return (newNode);
}
