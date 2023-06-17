#include <stdio.h>

/**
 * main - prints all single digit numbers using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*covert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
