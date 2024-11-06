#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 * 
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    if (n == 2)
    {
        return (1);
    }
    return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is divisible by any number
 * @n: the number to be checked
 * @i: the current divisor to check
 * 
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
    if (i * i > n)
    {
        return (1);
    }
    if (n % i == 0)
    {
        return (0);
    }
    return (check_prime(n, i + 1));
}

