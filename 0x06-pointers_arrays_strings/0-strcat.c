#include "main.h"

/**
 * _strcat -> this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while src[j] !='\0'
	{

	 dest[i] = src[j]; 
		 i++;
		 j++;
	}
	dest[len] = '\0';
	return (dest);
}
