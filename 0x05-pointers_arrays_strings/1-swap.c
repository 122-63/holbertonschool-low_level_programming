#include "holberton.h"

/**
 * swap_int - exchange two integer values
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
