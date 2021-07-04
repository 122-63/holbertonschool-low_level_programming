#include "holberton.h"
/**
 * reset_to_98 - change of pointer value n
 * @n: puntero
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int y = *n;

	y = 98;
		*n = y;
}
