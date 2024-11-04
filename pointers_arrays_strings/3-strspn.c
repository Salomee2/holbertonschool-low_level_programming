#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: substring
 * Return: number of char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (i = 0; s[l] != accept[i]; i++)
		{
			if (accept[i] == '\0')
				return (l);
		}
	}
	return (0);
}
