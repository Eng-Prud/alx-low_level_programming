#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: ptr to a ptr to head of the list
 * @n: Int value to be stored in new node
 * Return: address of ne element, NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
