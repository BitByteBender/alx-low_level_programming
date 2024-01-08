#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: pointer to the list head
 * nodeCounter: to keep track of the number of nodes
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *thisNode = h;
	short nodeCounter = 0;

	while (thisNode != NULL)
	{
	printf("%d\n", thisNode->n);
	thisNode = thisNode->next;
	nodeCounter++;
	}

	return (nodeCounter);
}
