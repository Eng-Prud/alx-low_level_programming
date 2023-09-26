#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: ptr to head of the list
 * Return: sum of alldata(n), 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
