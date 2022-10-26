#include "lists.h"

/**
 * get_nodeint_at_index - return at some indext node of list
 * *head: head of linked list
 * @index: index of node
 *
 * Return: at some index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
