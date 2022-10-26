#include "lists.h"

/**
 * add_nodeint_end - add new node at end function
 * @head: head of list
 * @n: number of elemnts
 *
 * Return: new node at end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd;
	listint_t *tmpdt;

	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	new_nd->next = *head;
	tmpdt = *head;
	
	if (*head == NULL)
	{
		*head = new_nd;
	}
	else
	{
		new_nd->next = NULL;
		while (tmpdt->next != NULL)
			tmpdt = tmpdt->next;
		tmpdt->next = new_nd;
	}
	return (*head);
}
