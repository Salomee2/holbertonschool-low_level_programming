#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: char to locates in the string
 * Return: *c if c is found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
return ('\0');
}
