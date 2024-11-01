#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîna comparer.
 * @s2: Deuxième chaîna comparer.
 *
 * Return: Un nombre négatif si s1 est plus petit que s2,
 *         0 si les chaînes sont identiques,
 *         ou un nombre positif si s1 est plus grand que s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
