#include "lists.h"

/**
 * free_listint - free list
 * @head: head of list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmpdt;

	while ((tmpdt = head) != NULL)
	{
		head = head->next;
		free(tmpdt);
	}
}
