#include "holberton.h"

/**
 * _abs - cambiar el numero negativo a positivo.
 * @number: entrada
 *
 * Return: void.
 */
int _abs(int number)
{
		if (number < 0)
		{
			number = (-1) * number;
		}
	return (number);
}

