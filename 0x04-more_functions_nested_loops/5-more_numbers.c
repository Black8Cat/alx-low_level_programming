#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
				_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
		}
		_putchar('\n');
	}
}
