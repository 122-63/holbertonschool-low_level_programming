#include "holberton.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int number = 0;
while (number <= 9)
{
print_alphabet();
number++;
}
}

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

