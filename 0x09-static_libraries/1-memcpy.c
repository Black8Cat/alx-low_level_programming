#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *
 * @src: the first memory area
 * @dest: the second memory area
 * @n: the number of bytes
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

