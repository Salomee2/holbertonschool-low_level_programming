#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est alphabétiqu
 * @c: Le caractère à vérifi
 * Return: 1 si le caractère est une lettre, minuscule ou majuscule,
 * 0 sinon
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* Renvoie 1 si c est une lettre */
	}
	else
	{
		return (0); /* Renvoie 0 sinon */
	}
}

