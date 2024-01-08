#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements of doubly linked list
 * @h: pointer to the list head
 * nodeCounter: to keep track of the number of nodes
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	short nodeCounter = 0;

	while (h != NULL)
	{
	h = h->next;
	nodeCounter++;
	}

	return (nodeCounter);
}
