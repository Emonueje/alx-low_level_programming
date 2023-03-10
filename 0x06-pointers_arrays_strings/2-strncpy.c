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
	int i;

	for (i = 0; (i < n && src[i]); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
