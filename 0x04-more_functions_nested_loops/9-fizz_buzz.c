#include "main.h"

/**
 * main -  prints the numbers from 1 to 100
 *         for multiples of three print Fizz
 *         for the multiples of five print Buzz
 *         for multiples of both three and five print FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}