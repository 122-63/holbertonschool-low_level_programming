#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char numeros = '0';

	while (numeros <= '9')
	{
		putchar(numeros);
		numeros++;
	}
	putchar('\n');
	return (0);
}

