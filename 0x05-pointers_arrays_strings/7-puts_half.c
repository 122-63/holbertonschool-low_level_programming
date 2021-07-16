#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print half of a string
 * @str: variable
 * Return: Always 0.
 */
void puts_half(char *str)
{
	/* variable contadora */
	int m;
	int len = strlen(str);
	/*for (len = 0; len[str]; len++)*/
	if (len % 2 == 0)
	{
		/* imprime numeros desde la mitad hasta el final */
		for (m = len / 2; m <= len; m++)
		{
			_putchar(str[m]);
		}
	}
	else
	{
		for (m = (len + 1) / 2; m <= len; m++)
		{
			_putchar(str[m]);
		}
	}
}
