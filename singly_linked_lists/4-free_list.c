#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *cnt;
	while (head != NULL)
	{
		cnt = head;
		head = head ->next;
		free(cnt->str);
		free(cnt);
	}
}
