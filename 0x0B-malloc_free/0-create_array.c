#include "main.h"

/**
 * *create_array - a function that creates an array of chars
 *		and initializes it with a specific char
 *
 * @size:size of array
 * @c: char
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);

	while (size--)
		n[size] = c;

	return (n);
}
