#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string
 * Return: value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= +1;
		s++;
	}
	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		num = (num * 10) + (*S - '0');
		s++;
	}
	return (num * sign);
}
