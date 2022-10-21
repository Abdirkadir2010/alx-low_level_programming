#include "lists.h"

/**
 * add_node - add a new nodes function
 * @head: heaed of list_t
 * @str: input strings
 *
 * Return: added nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;

	while (str[len])
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
