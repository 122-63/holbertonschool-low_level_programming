#include "holberton.h"
#include <string.h>
/**
 * print_rev - fuction print in reverse
 * @s: variable puntero
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int sentences = strlen(s) - 1;
	int n;

	for (n = sentences; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
