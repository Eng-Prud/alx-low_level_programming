#include "lists.h"

/**
 * delete_nodeint_at_index - Function  that deletes the node at index 'index'
 * of a linked list
 * @head: ptr to head of linked list
 * @index: index of node that should be deleted
 * Return: 1 for SUCCESS, -1 for FAIL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *current, *previous;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = NULL;

	while (p < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		previous = current;
		current = current->next;
		p++;
	}
	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);
	return (1);
}
