#include <unistd.h>

/**
 * main - using the write function to prints something
 * followed by a new line to the standard error
 *
 * Return: 1 (Failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
