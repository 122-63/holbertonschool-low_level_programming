#include "holberton.h"

/**
 * _isupper - check for uppercase
 * @upper: variable
 *
 * Return: Always 0.
 */

int _isupper(int upper)
{
	if (upper >= 'A' && upper <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
