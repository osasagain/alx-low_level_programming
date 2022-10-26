#include "lists.h"

/**
* free_listint - Frees a list
* @head: Pointer to the first node of list
*/

void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}
