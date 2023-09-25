#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: ptr to head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *loop;

	while (head != NULL)
	{
		loop = head;
		head = head->next;
		free(loop);
	}
}
