#include "holberton.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			char valor[] = n + '0';
			int cont = 0;
			while (cont <= sizeof valor)
			{
				_putchar(valor[cont]);
			}
			if ( n != 98)
			{
				_putchar(',');
				_putchar(32);
			}
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98 )
		{
			char valor[] = n + '0';
			int cont = 0;
			while (cont <= sizeof valor)
			{
				_putchar(valor[cont]);
			}
			if ( n != 98)
			{
				_putchar(',');
				_putchar(32);
			}
			n--;
		}
	}
	_putchar(57);
	_putchar(56);
}

