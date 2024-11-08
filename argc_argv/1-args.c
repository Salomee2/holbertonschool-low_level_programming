#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés au programm
 * @argc: Nombre total d'arguments, incluant le nom du programme
 * @argv: Tableau des arguments
 * Return: 0 si le programme s'exécute avec succè
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
