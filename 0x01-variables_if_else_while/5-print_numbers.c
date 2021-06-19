#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int numeros = 0;

	while (numeros < 10)
	{
		putchar(numeros);
		numeros++;
	}
	putchar('\n');
	return (0);
}

