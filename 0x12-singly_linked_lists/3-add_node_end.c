#include "lists.h"

/**
 * add_node_end - adds nodes to the end function
 * @head: head of list_t
 * @str: input strings
 *
 * Return: added nodes at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;
	list_t *end;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	len = 0;

	while (str[len])
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (end);
}
