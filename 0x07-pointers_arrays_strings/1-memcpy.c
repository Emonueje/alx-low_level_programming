#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination of copied memory addresses
 * @src: source memory addresses
 * @n: input restriction
 * Return: Returns a pointer the function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
