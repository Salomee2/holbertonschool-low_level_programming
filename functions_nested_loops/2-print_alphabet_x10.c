#include "main.h"

/**
 * print_alphabet_x10 - Imprime 10 fois l'alphabet en minuscule
 */
void print_alphabet_x10(void)
{ int i = 0;
char letter;
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++; }
}
