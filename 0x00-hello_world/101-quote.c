#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int contador = 0;

char letters[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
while (contador <= 57)
{
	putchar(letters[contador]);
	contador++;
}
putchar('\n');
return (1);
}

