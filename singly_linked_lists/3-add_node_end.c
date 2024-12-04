#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node to the end of list
 * @head: double pointer to head
 * @str: string to copy into new node
 * Return: adress of new node or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *counter;
	char *cpy_str;
	size_t len = 0;

	cpy_str = strdup(str);
	if (cpy_str == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_node = malloc (sizeof(list_t));
	if (new_node == NULL)
	{
		free (cpy_str);
		return (NULL);
	}
	new_node->str = cpy_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	counter = *head;
	while (counter->next != NULL)
		counter = counter->next;
	counter->next = new_node;

	return (new_node);
}
