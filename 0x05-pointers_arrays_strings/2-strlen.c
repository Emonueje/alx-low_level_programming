#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be processed
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int i;
	int count;

	if (*(s + 0) == 0)
		return (1);
	for (i = 0; *(s + i) != 0; i++)
	{
		count = i;
	}
	return (count + 1);
}
