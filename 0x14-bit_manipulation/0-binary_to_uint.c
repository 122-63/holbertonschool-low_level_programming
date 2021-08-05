#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:puntero
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 1;
	int i = 0;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	while (i >= 0)
	{
		res = res + ((b[i] - '0') * num);
		num = num * 2;
		i--;
	}
	return (res);
}
