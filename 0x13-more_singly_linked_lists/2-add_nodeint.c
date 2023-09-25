#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: ptr to ptr to the head of the list
 * @n: int to be stored in new node
 * Return: Address of the new element, NULL if itfailed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
