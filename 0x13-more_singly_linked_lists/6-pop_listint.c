#include "lists.h"

/**
 * pop_listint - function that delete head
 * @head
 *
 * Return: head of node's data
 */
int pop_listint(listint_t **head)
{
	int hd_node;
	listint_t *h;
	listint_t c_node;

	if (*head == NULL)
		return (0);
	c_node = *head;
	hd_node = c_node->n;
	h = c_node->next;

	free(c_node);
	*head = h;
	
	return (hd_node);
}
