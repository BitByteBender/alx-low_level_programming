#include "lists.h"
#include <stdlib.h>
dlistint_t *dnodeGenerator(short, unsigned int);
/**
 * insert_dnodeint_at_index - inserts newNode at an idx in dlistint_t
 * @h: pointer to head pointer of dlistint_t
 * @idx: index of the list where newNode should be added
 * @n: value to be inserted in the newNode
 * Return: the address of newNode or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *thisNode = *h;
	unsigned short i = 0;

	if (h == NULL)
		return (NULL);

	newNode = (dlistint_t *)dnodeGenerator((int)n, idx);
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
	newNode->next = *h;
	newNode->prev = NULL;
	if (*h != NULL)
		(*h)->prev = newNode;
	*h = newNode;
	}
	else
	{
		if (thisNode != NULL)
		{
		while (i < (idx - 1) && thisNode != NULL)
		{
		thisNode = thisNode->next;
		i++;
		}
		}
		else if (i < (idx - 1) || thisNode == NULL)
		{
		free(newNode);
		return (NULL);
		}
	newNode->next = thisNode->next;
	newNode->prev = thisNode;
	if (thisNode->next != NULL)
		thisNode->next->prev = newNode;
	thisNode->next = newNode;
	}
	return (newNode);
}
/**
 * dnodeGenerator - generates a new dlistint_t node
 * @n: value to be inserted in the newNode
 * @idx: index of the list
 * Return: the address of the newNode or NULL if it failed
 */
dlistint_t *dnodeGenerator(short n, unsigned int idx)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t *) * (idx + n));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}
