#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 *		the data (n) of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
