#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to head pointer of listint_t
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		prevNode = NULL;
		while (*head != NULL)
		{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
		}

	}
	return (*head = prevNode);
}
