#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: character to locate in the string
 * Return: pointer to first occurrence of c if found,
 * NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
