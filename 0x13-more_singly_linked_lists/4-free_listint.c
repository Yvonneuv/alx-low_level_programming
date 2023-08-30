#include <string.h>
#include "lists.h"

/**
* free_listint - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

