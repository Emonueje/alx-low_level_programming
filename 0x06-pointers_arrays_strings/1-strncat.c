#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: input of type int
 * @src: input of type int
 * @n: input of type int
 * Return: a string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(src);
	j = 0;
	while(j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
