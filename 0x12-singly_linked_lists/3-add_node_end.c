#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - adds a new node to the end of the list_t
 * @head: pointer to head pointer of list_t
 * @str: string to be inserted to newNode
 * Created/allocated a new node
 * checks if head pointer is empty then newNode will be head
 * checks if either newMode or str NULL
 * find last node then insert newNode after last node at the end
 * Return: pointer to newNode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (str == NULL)
	{
	free(newNode);
	return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
	return (*head = newNode);
	}
	else
	{
	list_t *tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	/*newNode->len = strlen(str);*/
	tail->next = newNode;
	}

	return (newNode);
}
