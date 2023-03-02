#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input string to be processed
 * @src: second input string to be processed
 * Return: returns pointer to type char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = strlen(dest);
	for (j  = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
