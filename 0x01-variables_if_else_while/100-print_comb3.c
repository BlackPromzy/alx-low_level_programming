i#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, i;

	for (c = '48'; c <= '56'; c++)
	{
		for (i = '49'; i <= '57'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '56' || i != '57')
				{
					putchar(',');
					putchar(' ')
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
