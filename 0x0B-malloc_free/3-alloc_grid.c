#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - array 2 dimensional
 * @width: variable
 * @height: variable
 * Return: p1.
 */

int **alloc_grid(int width, int height)
{
	int **p1, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	p1 = malloc(height * sizeof(int *));
	if (p1 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p1[i] = malloc(width * sizeof(int));

		if (p1[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(p1[k]);
			}
			free(p1);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p1[i][j] = 0;
		}
	}
	return (p1);
}
