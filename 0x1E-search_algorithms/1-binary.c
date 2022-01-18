#include "search_algos.h"

/**
* binary_search -  searches for a value in a sorted array of integers
* @array:  is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: return value or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i;
	size_t right = size - 1, mid;
	int flag = 0;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		printf("Searching in array: ");
		i = left;
		flag = 0;
		while (i <= right)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("%d", array[i]);
			flag = 1;
			i++;
		}
		printf("\n");
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	printf("Searching in array: %d\n", array[mid + 1]);
	return (-1);
}
