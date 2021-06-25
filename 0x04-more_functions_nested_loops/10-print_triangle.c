#include "holberton.h"

/**
 * print_triangle - imprime un triangulo
 * @size: numero que entra
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int cont = 0;

	if (size <= 0)
	{
		_putchar(35);
	}
	while (cont < size)
	{
		int cont2 = size - (cont + 1);
		int cont3 = 0;

		while (cont2 > 0)
		{
			_putchar(32);
			cont2--;
		}

		while (cont3 < (cont + 1))
		{
			_putchar(35);
			cont3++;
		}
		_putchar('\n');
		cont++;
	}
}
