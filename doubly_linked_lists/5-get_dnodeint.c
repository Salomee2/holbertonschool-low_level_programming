#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of list
 * @head: Pointer to head
 * @index: Index of node starting from 0
 * Return: Pointer to nth or NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
