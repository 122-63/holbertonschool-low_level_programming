#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * cap_string - check the code
 * @mayu: puntero
 * Return: Always 0.
 */
char *cap_string(char *palabra)
{
	int P_letra;

	for (P_letra = 1; *palabra; ++palabra)
	{
		if (P_letra && isalpha(*palabra))
		{
			*palabra = toupper(*palabra);
			P_letra = 0;
		}
		if (*palabra == ' ' || *palabra == ',' || *palabra == ';'
		    || *palabra == '.' || *palabra == '!' || *palabra == '?' ||
		    *palabra == '"' || *palabra == '(' || *palabra == ')' ||
		    *palabra == '{' || *palabra == '}')
		{
			P_letra = 1;
		}
	}
	return (palabra);
}
