#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string based on n bytes
 * @dest: input of type char
 * @src: input of type char
 * @n: input of type int
 * Return: Returins a pointer to strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(src);
	for (i = 0; (i < n && src[i]); i++)
	{
		dest[i] = src[i];
	}
	if (j <= n)
		dest[i] = '\0';
	return (dest);
}
