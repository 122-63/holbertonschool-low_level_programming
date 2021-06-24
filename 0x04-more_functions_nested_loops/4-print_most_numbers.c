#include "holberton.h"

/**
 * print_most_numbers - imprimir de 1 al 9 !2 y !4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if ((num != 2) && (num != 4))
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}
