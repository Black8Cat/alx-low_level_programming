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
	char temp[999999];

	while (s[i++])
		length++;
	for (i = 0; length >= 0; i++)
	{
		--length;
		temp[i] = s[length];
	}
	temp[i] = '\0';
	for (i = 0; temp[i]; i++)
		s[i] = temp[i];
	s[i - 1] = '\0';
}
