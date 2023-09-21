#include "lists.h"

/**
 * add_node - Function that adds/returns a new node at the beginning
 * @head: head/start of the linked list
 * @str: pointer to a constant char string
 * Return: returns pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = strlen(str);

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
