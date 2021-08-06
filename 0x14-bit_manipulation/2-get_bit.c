#include <main.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: variable
 * @index:variable
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (bit);
	}
}
