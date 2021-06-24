#include "holberton.h"
/**
 * _isdigit - check for a digit 0 through 9
 * @digit: variable
 *
 * Return: 1 or 0.
 */

int _isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
