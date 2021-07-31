#include "lists.h"
/**
 * list_len - returm of elementes in a linked
 * @h: puntero
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
