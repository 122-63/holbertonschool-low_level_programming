#include "holberton.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
}
