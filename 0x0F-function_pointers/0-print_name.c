#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: puntero funcion
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	(*f)(name);
	}
}
