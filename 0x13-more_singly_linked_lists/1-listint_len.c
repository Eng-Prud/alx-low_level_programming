#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a
 * linked listint_t list
 * @h: ptr to elements of a list
 * Return: No of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
