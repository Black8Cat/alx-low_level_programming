#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 *		the beginning of a list
 *
 * @head: pointer to the first node
 * @n: value for the new node
 *
 * Return: the address of the new element
 *		or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
