#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
* listint_len - prints all the elements of a linked list.
* @h: a linked list to print
*
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		++counter;
		h = h->next;
	}

return (counter);
}
