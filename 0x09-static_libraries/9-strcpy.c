#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 *            including the terminating null byte (\0)
 *            o the buffer pointed to by dest
 *
 * @dest: the first character
 * @src: the second character
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

