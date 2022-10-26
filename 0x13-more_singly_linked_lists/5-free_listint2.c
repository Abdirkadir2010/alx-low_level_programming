#include "lists.h"
/**
 * free_listint2 - free list
 * @head: head of linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpdt;
	listint_t *c_node;

	if (head != NULL)
	{
		c_node = *head;

		while (c_node)
		{
			tmpdt = c_node;
			c_node = c_node->next;
			free(tmpdt);
		}
		*head = NULL;
	}
}
