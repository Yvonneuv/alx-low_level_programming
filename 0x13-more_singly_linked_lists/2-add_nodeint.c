#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* add_nodeint - adds a new node at the beginning of linked list.
* @head: a linked list to print
* @n: value to be added to the node
*
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

