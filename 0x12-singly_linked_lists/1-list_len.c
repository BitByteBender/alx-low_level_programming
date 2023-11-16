#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the elements of list_t
 * @h: pointer to the head of list_t
 * Return: number of elements in list_t list
 */
size_t list_len(const list_t *h)
{
	size_t Counter = 0;

	while (h != NULL)
	{
		h = h->next;
		Counter++;
	}

	return (Counter);
}
