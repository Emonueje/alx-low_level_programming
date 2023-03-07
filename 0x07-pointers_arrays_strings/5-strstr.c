#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: A pointer to the function
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);
		if (!haystack)
			return (NULL);
		haystack++;
	}
	return (NULL);
}
