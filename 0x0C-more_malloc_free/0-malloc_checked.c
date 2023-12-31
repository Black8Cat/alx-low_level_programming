#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: int
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
