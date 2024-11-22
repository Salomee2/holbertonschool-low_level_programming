#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *separator = "";
va_list args;
va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's')
{
printf("%s", separator);
if (format[i] == 'c')
printf("%c", va_arg(args, int));
if (format[i] == 'i')
printf("%d", va_arg(args, int));
if (format[i] == 'f')
printf("%f", va_arg(args, double));
if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
separator = ", ";
}
i++;
}
va_end(args);
printf("\n");
}

