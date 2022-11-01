#include "holberton.h"

/**
 * _memcpy - copies memory area from src to dest n amount of times
 *
 * @dest: pointer that will receive the copied data
 * @src: pointer that has the information to be copied
 * @n: amount of times the src information willbe copied to dest
 *
 *Return: dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
