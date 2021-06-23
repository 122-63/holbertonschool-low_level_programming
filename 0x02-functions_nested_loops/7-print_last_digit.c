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
	long int numero;

	numero = num;

	if (numero < 0)
	{
		numero = numero * (-1);
	}
	lasD = numero % 10;
	_putchar(lasD + '0');
	return (lasD);
}

