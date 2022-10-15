#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  * Return: Always (Success)
  */
int main(void)
{
	int  i, j;

	for (c = 0; c <= 100; c++)
	{
		for (i = 0; i < 100; i++)
		{
			if (i > j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
