#include "main.h"

/**
 * _islower - Vérifie si un caractère est en minuscule
 * @c: Le caractère à vérifier
 * Return: 1 si le caractère est en minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z') /* Vérification si c est une lettre minuscule */
	{
		return (1); /* Renvoie 1 si c est minuscule */
	}
	else
	{
		return (0); /* Renvoie 0 sinon */
	}
}
