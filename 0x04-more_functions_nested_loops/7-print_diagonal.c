#include "holberton.h"
/**
 * print_diagonal - dibuja una diagonal en diagolar
 * @n: valor que entra
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int cont = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (cont < n)
	{
		int cont2 = 0;
			while (cont2 < cont)
			{
				_putchar(32);
				cont2++;
			}
		_putchar(92);
		_putchar('\n');
		cont++;
	}
}
