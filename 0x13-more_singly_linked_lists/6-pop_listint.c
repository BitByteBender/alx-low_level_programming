#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - pops the head node of listint_t
 * @head: pointer to the head pointer of listint_t
 * Return: popped node data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *valHolder = *head;
	int popDt = 0;

	if (*head == NULL)
		return (0);

	valHolder = *head;
	popDt = valHolder->n;
	*head = valHolder->next;

	if (valHolder != NULL)
		free(valHolder);

	return (popDt);
}
