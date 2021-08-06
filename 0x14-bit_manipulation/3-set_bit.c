#inclide "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:puntero
 * @index:variable
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 64;

	if (index > bit)
	{
		return (-1);
	}
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
