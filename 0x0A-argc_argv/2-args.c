#include "holberton.h"
/**
 *main - Entry point
 *@argc: argc
 *@argv: argv
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c;
	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
