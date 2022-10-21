#include "lists.h"

/**
 * list_len - number of elements in list_t
 * @h: The linked list_t
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t ele;

	while (h)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
