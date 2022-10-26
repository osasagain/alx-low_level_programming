#include <stdlib.h>
#include "lists.h"

/**
* listint_len - Prints the number of elemets in linked list
* @h: Pointer to the linked list
* Return: the number of nodes in linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
