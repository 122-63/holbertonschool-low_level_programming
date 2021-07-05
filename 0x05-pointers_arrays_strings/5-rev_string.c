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
	char auxiliar;

	for (n = 0; n <= sentences / 2; n++)
	{
		auxiliar = s[n];
		s[n] = s[sentences - n];
		s[sentences - n] = auxiliar;
	}
}
