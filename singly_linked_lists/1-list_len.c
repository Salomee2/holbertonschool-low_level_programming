#include <stddef.h>
#include "lists.h"

/**
 * list_len - count the number of elements in a list
 * @h: pointer to head of the list
 * Return: Number of node in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
