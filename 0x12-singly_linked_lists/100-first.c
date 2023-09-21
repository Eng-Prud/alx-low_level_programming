#include "lists.h"

/**
 * print_before_main - Function to print text before main
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 * Return: Pointer to new node
 */

list_t *print_before_main(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * print_list - Prints elements
 *@h: ptr to head of list
 *Return: No of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		node_count++;
	}

	return (node_count);
}

/**
 * main - Entrypoint
 * Return: 0 SUCCESS
 */

int main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
