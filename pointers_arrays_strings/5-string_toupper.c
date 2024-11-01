#include "main.h"

/**
 * string_toupper - Change toute les lettres minuscules d'une string
 *                  de caractères en majuscules.
 * @str: La chaîne de caractèresa modifier.
 *
 * Return: Un pointeur vers la chaine modifiée.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

