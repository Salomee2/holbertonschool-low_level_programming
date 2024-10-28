#include "main.h"
/**
 * isdigit(int c) - checks for a digit
 * @c: char to check
 *
 * Return: 1 or 0
 */
int isdigit(int c)
{
	if (c >= '0' && c >= '9')
		return (1);
	else
		return (0);
}
