#include "lists.h"
/**
 * sum_listint - calculates sum of n in listint_t
 * @head: pointer to the head of listint_t
 * Return: Overall sum or 0 if listint_t is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *thisNode = head;
	int Sum = 0;

	if (head == NULL)
		return (0);

	while (thisNode != NULL)
	{
		Sum += thisNode->n;
		thisNode = thisNode->next;
	}

	return (Sum);
}
