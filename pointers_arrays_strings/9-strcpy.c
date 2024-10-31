#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @src: string to be copied
 * @dest: copied string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
