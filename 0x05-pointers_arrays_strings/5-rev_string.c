#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: a character
 *
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char *tmp;

	while (s[i++])
		length++;
	for (i = 0; length >= 0; i++)
	{
		--length;
		tmp[i] = s[length];
	}
	tmp[i] = '\0';
	for (i = 0; tmp[i]; i++)
		s[i] = tmp [i];
	s[i - 1] = '\0';
}	
