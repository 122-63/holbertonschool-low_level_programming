#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int cont1 = 0;

	while (cont1 <= 10)
	{
		int cont2 = 0;

		while (cont2 <= 14)
		{
			if (cont2 > 9)
			{
				_putchar('1');
			}
			_putchar((cont2 % 10) + '0');
			cont2++;
		}
		cont1++;
		_putchar('\n');
	}
}
