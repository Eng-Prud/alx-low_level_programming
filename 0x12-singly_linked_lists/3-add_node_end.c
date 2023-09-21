#include "lists.h"

/**
 * add_node_end - Function that adds/returns a new node at the end of list
 * @head: head/start of the linked list
 * @str: pointer to a constant char string
 * Return: returns pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *var;
	size_t len = 0;

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

	while (str[len])
		len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	var = *head;

	while (var->next != NULL)
		var = var->next;

	var->next = new;

	return (new);
}
