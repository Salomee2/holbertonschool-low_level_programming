#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory
 * @b: first int
 * Return: if fail 98 or pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

