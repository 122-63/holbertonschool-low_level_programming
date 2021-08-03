#include "lists.h"
/**
 * pop_listint - eletes the head node of a listint_t linked list,
 * and returns the head node’s data (n). if the linked list
 * is empty return 0
 * @head: doble puntero
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (n);
}
