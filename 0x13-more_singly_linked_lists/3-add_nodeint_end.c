#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: linked list
 * @n: number of nodes
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *struct_node;

	struct_node = malloc(sizeof(listint_t));

	if (struct_node == NULL)
	{
		return (NULL);
	}
	struct_node->n = n;
	struct_node->next = NULL;

	if (*head == NULL)
	{
		*head = struct_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = struct_node;
	}
	return (struct_node);
}
