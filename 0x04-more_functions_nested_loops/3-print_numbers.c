#include "holberton.h"

/**
 * print_numbers - imprimir numero del o al 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
