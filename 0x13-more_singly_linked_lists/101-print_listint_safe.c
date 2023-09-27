#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: ptrto head of the linked list
 * Return: returns no of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first_ptr = head;
	const listint_t *second_ptr = head;
	size_t node_count = 0;

	while (second_ptr != NULL && first_ptr != NULL && second_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)second_ptr, second_ptr->n);
		node_count++;
		second_ptr = second_ptr->next;
		first_ptr = first_ptr->next->next;

		if (second_ptr == first_ptr)
		{
			first_ptr = first_ptr->next;
			exit(98);
		}
	}

	return (node_count);
}
