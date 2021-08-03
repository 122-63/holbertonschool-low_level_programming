#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head:puntero
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
