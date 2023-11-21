#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the head of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t Counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	Counter++;
	}

	return (Counter);
}
