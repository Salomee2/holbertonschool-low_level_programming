#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entr�e du programme
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{ printf("%d est positif\n", n); }
	else if (n == 0)
	{printf("%d est zero\n", n); }
	else
	{printf("%d est négatif\n, ); }
	return (0);
}
