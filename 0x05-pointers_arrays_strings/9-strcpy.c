#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copiar de un puntero a otro.
 * @dest: variable
 * @src: variable
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
