#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * Return: Always 0 (Successs)
 */
int main(void)
{ char c = 'a';
while (c <= 'z')
{ putchar(c);
c++; }
c = 'A';
while (c <= 'z')
{ putchar(c);
c++; }
putchar('\n');
return (0); }
