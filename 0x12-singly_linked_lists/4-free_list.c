#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list.
 * @head: head of the list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
