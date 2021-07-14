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

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s1 == NULL)
	{
		s2 = ("");
	}

	res = malloc(strlen(s1));
	strcat(res, s1);
	strcat(res, s2);

	return (res);
}
