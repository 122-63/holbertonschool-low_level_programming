#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - check the code for Holberton School students.
 * @s1: var one
 * @s2: var two
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i;
	int y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	;
	for (y = 0; s2[y]; y++)
	;

	res = malloc(i + 1 + y);

	if (res == NULL)
	{
		return (NULL);
	}

	strcat(res, s1);
	strcat(res, s2);

	return (res);
}
