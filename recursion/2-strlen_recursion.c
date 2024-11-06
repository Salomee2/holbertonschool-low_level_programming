#include "main.h"
/**
 *  _strlen_recursion -  _strlen_recursion
 *  @s: string s
 *  Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
