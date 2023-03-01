#include "main.h"
#include <string.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = strlen(src);
	for (i = 0; i != length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
