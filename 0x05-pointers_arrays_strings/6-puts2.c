#include "holberton.h"
#include <string.h>
/**
 * puts2 - fuction print every other character
 * @str: variable
 * Return: Always 0.
 */
void puts2(char *str)
{
	int num = strlen(str) - 1;
	int num1 = 0;

	while (num1 <= num)
	{
		if (str[num1] % 2 == 0)
		{
			_putchar(str[num1]);
		}
		num1++;
	}
	_putchar('\n');
}
