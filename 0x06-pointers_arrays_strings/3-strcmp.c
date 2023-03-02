#include "main.h"

/**
 * _strcmp - compares two strings and returns the difference
 * @s1: first input
 * @s2: second input
 * Return: the difference in the first charcters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
