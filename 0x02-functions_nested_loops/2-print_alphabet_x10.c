#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int number = 0;

	while (number <= 9)
	{
	int alphabet = 97;

		while (alphabet <= 122)
		{
		_putchar(alphabet);
		alphabet++;
		}
	_putchar('\n');
	number++;
	}
}

