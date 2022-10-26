#include "lists.h"
/** add_nodeint_end - add new node at end function
 * @head: head of list
 * @n: number of elemnts
 *
 *Return: new node at end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		tmp = *head;
	}
	else
		return (NULL);
	if(*head == NUll)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
