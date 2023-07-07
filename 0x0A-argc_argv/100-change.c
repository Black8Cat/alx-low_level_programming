#include "main.h"

/**
 * main -  a program that prints the minimum number of coins
 *	to make change for an amount of money
 *
 * @argc: integer
 * @argv: array
 *
 * Return: return 1 if the number of arguments passed
 *	to your program is not exactly 1
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; n > 0;)
	{
		i += n / 25;
		if (n % 25 >= 0)
			n = n % 25;
		i += n / 10;
		if (n % 10 >= 0)
			n = n % 10;
		i += n / 5;
		if (n % 5 >= 0)
			n = n % 5;
		i += n / 2;
		if (n % 2 >= 0)
			n = n % 2;
		i += n / 1;
		if (n % 1 >= 0)
			n -= 1;
	}
	printf("%d\n", i);
	return (0);
}
