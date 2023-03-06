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
	int i = 0, check = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			check = 1;
			break;
		}
		i++;
	}
	if (!check)
		return (NULL);
	s = (s + i);
	return (s);
}
