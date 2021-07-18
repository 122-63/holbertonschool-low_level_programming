#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - check the code for Holberton School students.
 * @b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p1;

	p1 = malloc(b);

	if (!p1)
	{
		exit(98);
	}
	return (p1);
}
