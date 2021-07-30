#include <stdlib.h>
#include "holberton.h"
/**
 * cap_string - check the code
 * @mayu: puntero
 * Return: Always 0.
 */
char *cap_string(char *mayu)
{
	int i;

	for (i = 0; mayu[i]; i++)
	{
		if (mayu[i] >= 'a' && mayu[i] <= 'z')
		{
			mayu[i] = mayu[i] - 'a' + 'A';
		}
	}
	return (mayu);
}
