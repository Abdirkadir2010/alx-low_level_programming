#include "lists.h"
/**
 * sum_listint - sum linked list fun
 * @head: head of list
 *
 * Return: sum of all
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
