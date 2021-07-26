#include "holberton.h"
/**
 * _strcmp - funcion que comapra dos strings
 * @s1: puntero
 * @s2: puntero
 * Return: entero
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
