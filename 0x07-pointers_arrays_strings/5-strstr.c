#include "main.h"

/**
* _strstr - locates s substring.
*@haystack: char array
*@needle: char array (password)
*
* Return: array
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0 ; haystack[i] ; i++)
	{
		for (k = i, j = 0 ; needle[j] != '\0' ; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0'
					break;

		if (needle[j] == 0)
		}
			return (haystack + i)
		}
	}
	return (0);
}
