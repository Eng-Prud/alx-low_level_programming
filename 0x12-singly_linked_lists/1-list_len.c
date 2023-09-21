#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linkedlist
 * @h: Pointer to the first element of the structure
 * Return: returns elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
