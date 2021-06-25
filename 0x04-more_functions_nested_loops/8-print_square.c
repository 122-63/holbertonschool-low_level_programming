#include "holberton.h"
/**
 * print_square - imprimir unciatrado
 * @size: numero de veces
 * Return: Always 0.
 */

void print_square(int size)
{
	int cont = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (cont < size)
	{
		int cont2 = 0;

		while (cont2 < size)
		{
			_putchar(35);
			cont2++;
		}
		cont++;
		_putchar('\n');
	}
}
