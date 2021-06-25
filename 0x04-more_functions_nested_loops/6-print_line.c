#include "holberton.h"
/**
 * print_line - draws a straight line
 * @n: la cantidad de lineas a dibujar
 * Return: Always 0.
 */

void print_line(int n)
{
	int cont = 0;

	while (cont < n)
	{
		_putchar(95);
		cont++;
	}
	_putchar('\n');
}
