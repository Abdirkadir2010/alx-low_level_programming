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
	listint_t c_node;

	if (*head == NULL)
		return (0);
	
	hd_node = (*head)->hd_node;
	c_node = (*head)->next;

	free(*head);

	*head = c_node;
	
	return (hd_node);
}
