#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: variable
 * @action: puntero
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
}
