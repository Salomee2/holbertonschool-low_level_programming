#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry points of the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 if success or exit with 98, 99, 100
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
operation = get_op_func(argv[2]);

if (operation == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}

result = operation(a, b);
printf("%d\n", result);

return (0);
}

