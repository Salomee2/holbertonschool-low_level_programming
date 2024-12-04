#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at head of a list
 * @head: double pointer to head of list
 * @str: string to copy in new node
 * Return: adress of new node or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *cpy_str;
	size_t len = 0;

	/* duplication of str*/
	cpy_str = strdup(str);
	if (cpy_str == NULL)
		return (NULL);
	/* len str*/
	while (str[len])
		len++;

	/* allocate memory*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	free(cpy_str);
	return (NULL);
	}

	/* new node*/
	new_node->str = cpy_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
