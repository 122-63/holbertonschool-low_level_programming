#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest:variable
 * @src:variable
 * @n:variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
