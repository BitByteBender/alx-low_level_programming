#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a newNode to the beginning of dlistint_t
 * @head: pointer to head pointer of dlistint_t
 * @n: value to be stored in the newNode
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode != NULL)
	{
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
	(*head)->prev = newNode;
	}

	return (*head = newNode);
	}
	else
		return (NULL);
}
