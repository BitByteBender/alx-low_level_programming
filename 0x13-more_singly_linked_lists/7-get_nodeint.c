#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns node at give index in listint_t
 * @head: pointer to the head of litsint_t
 * @index: inde of node to get
 * Return: pointer to the node at a specified index
 * Or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *thisNode = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (thisNode != NULL)
	{
		if (i == index)
			return (thisNode);

	thisNode = thisNode->next;
	i++;
	}

	return (NULL);
}
