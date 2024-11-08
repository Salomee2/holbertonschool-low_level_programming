#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - Additionne les nombres passés en arguments
*@argc: Nombre total d'arguments
*@argv: Tableau des arguments
*Return: 0 si l'addition réussit, 1 si une erreur est détectée
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int j = 0;

while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

