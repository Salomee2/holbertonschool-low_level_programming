#include <stdio.h>
/**
 * main - print without char
 * Return: Always 0 (Success)
 */
int main(void)
{ char n = '0';
char t = 'a';

while (n <= '9')
{ putchar(n);
n++; }
while (t <= 'f')
{ putchar(t);
t++; }
putchar('\n');
return (0); }
