#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of dlistint_t
 * @head: pointer the dlistint_t head
 * @index: index of the node to get starts from 0
 * Return: pointer to the nth node
 * or
 * NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned short i = 0;

	while ((i < index) && (head != NULL))
	{
	head = head->next;
	i++;
	}

	if ((head != NULL) && (i == index))
		return (head);
	else
		return (NULL);
}
