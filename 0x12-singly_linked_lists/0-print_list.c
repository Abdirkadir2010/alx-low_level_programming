#include "lists.h"
/**
 * print_list - out put all elemnts of list_t list.
 * @h: The list of linked list list_t
 *
 * Return: No of node in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d]%s\n", h->len, h->str);
		else
			printf("[0] [nil]\n");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
