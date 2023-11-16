#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the elements of list_t
 * @h: pointer to the head of list_t
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t Counter = 0;
	/*h = (list_t *)malloc(sizeof(list_t));*/

	while (h != NULL)
	{
		if (h->str == NULL)
			puts("[0] (nil)");
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		Counter++;
	}

	return (Counter);
}
