#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int row = 0;
	int column;

	while (row < 10)
	{
		column = 0;

		while (column < 10)
		{
			int result = row * column;

			if (column == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}

