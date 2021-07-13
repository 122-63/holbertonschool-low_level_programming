#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:variable
 * Return: Always n.
 */
char *_strdup(const char *str)
{
	char *n = malloc(strlen(str) + 1);

	if (str == NULL || n == NULL)
	{
		return (NULL);
	}
	strcpy(n, str);
	return (n);
}
