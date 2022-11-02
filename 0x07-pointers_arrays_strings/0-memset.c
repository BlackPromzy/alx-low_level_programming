#include "helberton.h"

/**
* _memset - fill memory with a constant byte.
* @s: memory area to fill.
* @b: hexadecimal number.
* @n: n bytes of memory area to fill.
* Return: a pointer to the memory area filled.
*/
void *_memset(char *s, char *b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*u++ = b;
	}
	return (s);
}
