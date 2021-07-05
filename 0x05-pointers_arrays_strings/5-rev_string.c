#include "holberton.h"
#include <string.h>
/**
 * rev_string - fuction print in reverse
 * @s: variable puntero
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int sentences = strlen(s) - 1;
	int n;

	for (n = sentences; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
