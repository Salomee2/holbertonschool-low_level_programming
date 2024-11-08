#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie deux nombres passés en argument
 * @argc: Nombre total d'arguments
 * @argv: Tableau des arguments
 * Return: 0 si la multiplication est effectué, 1 sinon
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
