#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup(NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
		
	}
	free(s);
	return (0);
	
}
