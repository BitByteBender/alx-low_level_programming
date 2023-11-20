#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the start of listint_t
 * @head: pointer to head pointer of listint_t
 * @n: integer value to be stored in new node
 * Return: address of newly created nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;

	return (*head = newNode);
}
