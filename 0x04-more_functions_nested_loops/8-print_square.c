#include "holberton.h"
/**
 * print_square - imprimir unciatrado
 * @size: numero de veces
 * Return: Always 0.
 */

void print_square(int size)
{
	int cont = 0;

	while (cont < size)
	{
		int cont2 = 0;

		while (cont2 < size)
		{
			_putchar(35);
			cont2++;
		}
		_putchar('\n');
		cont++;
	}
}
