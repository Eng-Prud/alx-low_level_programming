#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double ptr to head to a linked list
 * Return: ptr to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *current_node = *head;
	listint_t *temp;

	while (current_node != NULL)
	{
		temp = current_node->next;

		current_node->next = prev;

		previous_node = current_node;
		current_node = next_node;
	}

	*head = previous_node;
	return *head;
}
