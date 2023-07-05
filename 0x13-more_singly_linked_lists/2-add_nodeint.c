#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head of linked list
 * @n: number of nodes
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *struct_node;

	struct_node = malloc(sizeof(listint_t));

	if (struct_node == NULL)
	{
		return (NULL);
	}
	struct_node->n = n;
	struct_node->next = *head;
	*head = struct_node;
	return (struct_node);
}
