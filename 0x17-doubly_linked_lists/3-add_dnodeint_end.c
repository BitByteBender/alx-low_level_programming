#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a newNode to the end of dlistint_t
 * @head: pointer to head pointer of dlistint_t
 * @n: value to be stored in the newNode
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode != NULL)
	{
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
	newNode->prev = NULL;
	return (*head = newNode);
	}
	else
	{
	dlistint_t *tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = newNode;
	newNode->prev = tail;
	}
	return (newNode);
	}
	else
		return (NULL);
}
