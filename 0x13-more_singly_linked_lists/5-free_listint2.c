#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 *
 * @head: address of pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
