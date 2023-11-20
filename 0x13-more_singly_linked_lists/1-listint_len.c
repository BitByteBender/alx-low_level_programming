#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints elements in listint_t
 * @h: pointer to the head of listint_t
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t Counter = 0;

	while (h != NULL)
	{
	h = h->next;
	Counter++;
	}

	return (Counter);
}
