#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node to the start of the list_t
 * @head: pointer to head pointer of list_t
 * @str: string to be inserted to newNode
 * Created/allocated a new node
 * puts it in front of current head
 * moved head of list_t to point to newMode
 * checks if either newMode or str
 * Return: pointer to newNode
 */
list_t *add_node(list_t **head, const char *str)
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
	newNode->next = *head;


	return (*head = newNode);
}
