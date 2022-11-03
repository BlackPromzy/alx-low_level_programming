#include "main.h"

/**
 * _isupper - Entry point
 * Desc: Entry
 * @c: variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
