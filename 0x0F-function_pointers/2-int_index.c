#include "function_pointers.h"
/**
 * int_index - buscar numero
 * @array: puntero
 * @size: variable
 * @cmp: fincion puntero
 * Return: 0 if false, something else otherwise.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
