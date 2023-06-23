#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n:  the number of times the character \ should be printed
 *
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < k; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
}
