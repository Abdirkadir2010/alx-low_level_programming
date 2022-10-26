#include "lists.h"

/**
 * listint_len - listt length function
 * @h: head of list .
 *
 * Return: nos of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
