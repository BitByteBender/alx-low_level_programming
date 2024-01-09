#include "lists.h"
/**
 * sum_dlistint - returns sum of all data(n) of a dlistint_t
 * @head: pointer to the dlistint_t head
 * Return: overall sum or 0 if dlistint_t is empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
	unsigned short sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
	}
	else
		return (0);
}
