#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: returns NULL on failure
 * else returns a pointer to the function
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *mystr;
	char *null = "";


	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = null;
		if (s2 == NULL)
			s2 = null;
	}
	len = strlen(s1) + strlen(s2);
	len++;
	mystr = malloc(len * sizeof(char));
	if (mystr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		mystr[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		mystr[i] = s2[j];
	}
	return (mystr);
}
