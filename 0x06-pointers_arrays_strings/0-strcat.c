#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strcat - check the code for Holberton School students.
 * @dest: variable
 * @src: variable
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *i, *j;

	for (i = dest; *i != '\0'; i++)
		;

	for (j = src; *j != '\0'; j++, i++)
		*i = *j;

	*i = '\0';
	return (dest);
}
