#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t safely
 * @head: pointer to head of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *firstNode, *secondNode;
	unsigned short Counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		firstNode = head, secondNode = head;
		while (firstNode != NULL && secondNode != NULL && firstNode->next != NULL)
		{
		printf("[%p] %d\n", (void *)secondNode, secondNode->n);
		Counter++;
		secondNode = secondNode->next;
		firstNode = firstNode->next->next;

			if (secondNode == firstNode)
			{
			printf("-> [%p] %d\n", (void *)secondNode, secondNode->n);
			exit(98);
			}
		}

		while (secondNode != NULL)
		{
		printf("[%p] %d\n", (void *)secondNode, secondNode->n);
		Counter++;
		secondNode = secondNode->next;
		}
	}

	return (Counter);
}
