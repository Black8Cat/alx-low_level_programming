#include "lists.h"


/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a character
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - a function that prints all the elements of a list
 *
 * @h: pointer
 *
 * Return: the number of noodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
