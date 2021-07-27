#include <stdio.h>
#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * 
 * Return: Always 0.
 */
char *string_toupper(char * letra)
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
