#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: first memory adress to be copied from
 * @dest: adress of copied memory
 * @n: number of bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);
}
