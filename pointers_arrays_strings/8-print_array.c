#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	i++;
	}
	printf("\n");
}
