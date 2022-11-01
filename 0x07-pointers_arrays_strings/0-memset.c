#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte n amount of times.
 *
 * @s: Pointer that has the address of the memory to fill.
 * @b: Constant byte that will be written into the momory.
 * @n: Amount of times the byte will be written into the memory.
 *
 * Return: Address of the memory where thebyte was written.
 */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		return (s);
}
