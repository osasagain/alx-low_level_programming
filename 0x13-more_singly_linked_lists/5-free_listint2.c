#include "lists.h"

/**
* free_listint2 - Frees a list
* @head: Double pointer to the first node of list
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			free(placeholder);
		}
	}
}
