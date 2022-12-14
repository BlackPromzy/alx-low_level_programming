#include "main.h"

/**
 * print_times_table - check the code for Holberton School students.
 * @n: int type
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar(((a * b) % 10) + '0');
				}
				else if ((a * b) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((a * b) + '0');
				}
				else if ((a * b) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((a * b) / 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((a * b) / 100) + '0');
					_putchar((((a * b) / 10) % 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
