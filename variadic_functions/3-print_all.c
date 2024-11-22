	#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
 int i = 0;
    char *separator = "", *str;
    va_list args;

    va_start(args, format);

    if (format != NULL)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(args, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(args, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(args, double));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(nil)";
                    printf("%s%s", separator, str);
                    break;
            }
            separator = ", ";
            i++;
        }
    }
    va_end(args);
    printf("\n");
}
