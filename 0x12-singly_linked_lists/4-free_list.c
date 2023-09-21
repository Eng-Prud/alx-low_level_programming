#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: pointer to the head of the linked lists
 */

void free_list(list_t *head)
{
	list_t *current, *temporary;
	
	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		temporary = current;
		current = current->next;

		free(temporary->str);

		free(temporary);
	}

	head = NULL;
}
