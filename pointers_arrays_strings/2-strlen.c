#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: la chaine a mesurer
 * Return: la longueur de la chaine
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}
