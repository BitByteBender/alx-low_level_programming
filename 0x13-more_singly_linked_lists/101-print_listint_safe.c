#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
const listint_t *checkLoop(const listint_t *head);
/**
 * print_listint_safe - prints a listint_t safely
 * @head: pointer to head of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trigger = checkLoop(head);
	unsigned short Counter = 0;

	while (head != NULL)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	Counter++;

		if (head == trigger)
		{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
		}
	head = head->next;
	}

	return (Counter);
}
/**
 * checkLoop - checks the starting node of a loop in a linked list
 * @head: pointer to head of listint_t
 * Return: node where loop starts or NULL if no loop detected
 */
const listint_t *checkLoop(const listint_t *head)
{
	const listint_t *firstNode, *secondNode;

		firstNode = head, secondNode = head;

	while (secondNode != NULL && firstNode != NULL && firstNode->next != NULL)
	{
	secondNode = secondNode->next;
	firstNode = firstNode->next->next;

	if (secondNode == firstNode)
	{
		secondNode = head;
		while (secondNode != firstNode)
		{
		secondNode = secondNode->next;
		firstNode = firstNode->next;
		}
	return (secondNode);
	}
	}
	return (NULL);
}
