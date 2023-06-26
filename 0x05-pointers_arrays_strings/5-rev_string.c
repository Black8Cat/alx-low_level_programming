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
	int l, i;
	char temp;

	/*find string length without nul char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to the half of it*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];/*-1 because the array start from 0*/
		s[l - 1 - i] = temp;
	}
}
