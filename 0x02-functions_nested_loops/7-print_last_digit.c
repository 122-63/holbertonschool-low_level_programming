#include "holberton.h"

/**
 * print_last_digit - print the last digit
 * @num: parametros de ent5rada
 *
 * Return: void.
 */
int print_last_digit(int num)
{
	int lasD;

	if (num < 0)
	{
		num = num * -1;
	}

	lasD = num % 10;
	_putchar(lasD + '0');
	return (lasD);
}

