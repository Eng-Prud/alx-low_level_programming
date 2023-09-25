#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * @head: double pointer to head
 * Return: return head'snode data, return 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *temporary = *head;

		data = temporary->n;
		*head = (*head)->next;
		free(temporary);
	}

	return (data);
}
