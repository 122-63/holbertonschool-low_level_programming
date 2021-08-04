#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: doble puntero
 * @idx:variable
 * @n: variable
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new_nodo;
	unsigned int i;

	new_nodo = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		aux = *head;
		for (i = 1; i < idx && aux != NULL; i++)
		{
			aux = aux->next;
		}
		if (new_nodo == NULL || aux == NULL)
		{
			return (NULL);
		}
	}
		new_nodo->n = n;
		if (idx == 0)
		{
			new_nodo->next = *head;
			*head = new_nodo;
			return (new_nodo);
		}
		new_nodo->next = aux->next;
		aux->next = new_nodo;
		return (new_nodo);
}
