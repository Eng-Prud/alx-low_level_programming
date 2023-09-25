#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: ptr to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *loop;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		loop = *head;
		*head = loop->next;
		free(loop);
	}
}
