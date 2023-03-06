#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: input string
 * Return: Returns a pointer of char to function
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				continue;
			else
				return (needle);
		}
		
	}
	return (NULL);
}
