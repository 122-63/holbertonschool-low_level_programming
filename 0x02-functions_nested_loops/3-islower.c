#include "holberton.h"

/**
 * _islower - function the check lowercase and otherwise.
 * @c: es caracter a validar
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

