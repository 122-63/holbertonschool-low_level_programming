#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numeros = 0;
	int letras = 97;

	while (numeros <= 9)
	{
		putchar(numeros + '0');
		numeros++;
	}
	while (letras <= 102)
	{
		putchar(letras);
		letras++;
	}
	putchar('\n');
	return (0);
}
