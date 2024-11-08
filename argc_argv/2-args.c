#include <stdio.h>

/**
 * main - Affiche tous les arguments passés au programm
 * @argc: Nombre total d'arguments
 * @argv: Tableau des arguments
 * Return: 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
