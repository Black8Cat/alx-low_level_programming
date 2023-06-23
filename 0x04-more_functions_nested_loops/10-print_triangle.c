#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: 0 (Success)
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
