#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: input str pointer
 * @c: input char
 * Return: Returns a pointer to the function
 */
char *_strchr(char *s, char c)
{

	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
