#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;
	char word[] = "Holberton";

	while (count <= 7)
	{
	putchar(word[count]);
	count++;
	}
	return (0);
}

