#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given
 * position
 * @head: ptr to a ptr to the head of the linked list
 * @idx: ndex of the list where the new node should be added
 * @n: value to be stored in new npde
 * Return: Address of node,  NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p = 0;
	listint_t *new, *current;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current != NULL && p < idx - 1)
	{
		current = current->next;
		p++;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
