#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @n: parametro
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
       	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
