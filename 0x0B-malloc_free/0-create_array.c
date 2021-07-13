#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: variable
 * @c: variable
 *
 * Return: null or 1.
 */

char *create_array(unsigned int size, char c)
{
	char *p1;
	unsigned int contador;

	p1 = malloc(size * sizeof(*p1));

	if (p1 == 0)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (contador = 0; contador < size; contador++)
		{
			p1[contador] = c;
		}
	}
	return (p1);
}
