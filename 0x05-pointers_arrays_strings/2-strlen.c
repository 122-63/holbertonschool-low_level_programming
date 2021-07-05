#include "holberton.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: variable
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int longitud = 0;
	char *palabra;

	palabra = s;
	longitud = strlen(palabra);
	return (longitud);
}
