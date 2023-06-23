#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: the size of the square
 *
 * Return: 0 (Success)
 */
void print_square(int size)
{
	int h, f;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 0; h < size; h++)
		{
			for (f = 0; f < size; f++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
