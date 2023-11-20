#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node to the end of listint_t
 * @head: pointer to head pointer of listint_t
 * @n: integer value to be stored in new node
 * Return: pointer to newNode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tail;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		return (*head = newNode);

	tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = newNode;

	return (newNode);
}
