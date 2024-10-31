#include "main.h"

/**
 * _atoi - Convertit une chaîne en un entier.
 *@s: chaîne de caractèr a converti
 *Return: L'entier converti, ou 0 si aucun nombre trouvé.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] && s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result *sign);
}

