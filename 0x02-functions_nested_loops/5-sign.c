#include "holberton.h"

/**
 * print_sign - + o -.
 * @n: variable
 *
 * Return: void.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('i');
		_putchar('s');
		_putchar(32);
		_putchar('z');
		_putchar('e');
		_putchar('r');
		_putchar('o');
	}
	return (0);
}

