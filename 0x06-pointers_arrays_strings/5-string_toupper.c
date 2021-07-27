#include "holberton.h"
#include <stdlib.h>
/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase.
 * @letra: puntero
 * Return: letra.
 */
char *string_toupper(char *letra)
{
	int i;

	for (i = 0; i < letra[i]; i++)
	{
		if (letra[i] >= 'a' && letra[i] <= 'z')
		{
			letra[i] = letra[i] - 'a' + 'A';
		}
	}
	return (letra);
}
