#include "holberton.h"

/**
 * jack_bauer - print every minute oof the day.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hora, hora2, min, min2;

	hora = 0;
	while (hora <= 2)
	{
		hora2 = 0;
		while ((hora <= 1 && hora2 <= 9) || (hora == 2 && hora2 <= 3))
		{
			min = 0;
			while (min <= 5)
			{
				min2 = 0;
				while (min2 <= 9)
				{
					_putchar(hora + '0');
					_putchar(hora2 + '0');
					_putchar(':');
					_putchar(min + '0');
					_putchar(min2 + '0');
					_putchar('\n');
					min2++;
				}
				min++;
			}
			hora2++;
		}
		hora++;
	}
}
