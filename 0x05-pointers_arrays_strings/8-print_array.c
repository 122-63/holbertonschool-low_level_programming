#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 * print_array - imprimir array de enteros
 * @a:variable
 * @n:variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
