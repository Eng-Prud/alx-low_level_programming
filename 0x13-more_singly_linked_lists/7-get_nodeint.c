#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns nth node of a linked list
 * @head: ptr to head of linked list
 * @index: index of the node
 * Return: NULL if node doesn't exist, returns nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;

	while (head != NULL)
	{
		if (p == index)
		{
			return (head);

			head = head->next;
			p++;
		}
	}
	return (NULL);
}
