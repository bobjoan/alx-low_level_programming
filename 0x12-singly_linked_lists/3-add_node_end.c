#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to first node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *struct_node;

	struct_node = malloc(sizeof(list_t));

	if (struct_node == NULL)
	{
		return (NULL);
	}
	struct_node->str = strdup(str);
	struct_node->len = strlen(str);
	struct_node->next = NULL;

	if (*head == NULL)
	{
		*head = struct_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{ 
			current = current->next;
		}
		current->next = struct_node;
	}
	return (struct_node);
}
