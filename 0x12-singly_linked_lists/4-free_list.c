#include "lists.h"

/**
 * free_list - function that free a list_t
 * @head: head of list_t list.
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmpdt;

	while ((tmpdt = head) != NULL)
	{
		head = head->next;
		free(tmpdt->str);
		free(tmpdt);
	}
}
