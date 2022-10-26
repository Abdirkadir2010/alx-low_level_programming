#include "lists.h"

/**
 * add_nodeint - add new node or element to list
 * @head: head of list
 * @n: number of elements
 *
 * Return: adress of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);
	return (*head);
}
