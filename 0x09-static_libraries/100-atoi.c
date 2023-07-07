#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: a string
 *
 * Return: coverter integer from string
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int im = 0;
	int in = 0;

	while (s[im])
	{
		if (s[im] == '-')
	{
		sign *= -1;
	}
	while (s[im] >= '0' && s[im] <= '9')
	{
		in = 1;
		num = (num * 10) + (s[im] - '0');
		im++;
	}
		if (in == 1)
		{
			break;
		}
		im++;
	}
	num *= sign;

	return (num);
}
