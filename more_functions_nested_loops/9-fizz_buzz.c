#include "main.h"
#include <stdio.h>
/**
 * main - prints the number from 1 to 100, followed by a new l
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * and the multiples of three and five prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
