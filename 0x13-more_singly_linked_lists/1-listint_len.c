#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *		in a linked list
 *
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
