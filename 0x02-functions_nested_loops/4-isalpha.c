#include "holberton.h"

/**
 * _isalpha - function the check lowercase and otherwise.
 * @c: es caracter a validar
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
