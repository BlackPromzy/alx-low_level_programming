#include "main.h"

/**
 * _isupper - Entry point
 * Desc: Entry
 * @c: int var
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
