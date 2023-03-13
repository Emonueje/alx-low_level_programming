#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: input string to be dup.
 * Return: pointer to duplicate on success
 * Or Null if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *mystr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	mystr = malloc(len * sizeof(char));
	if (mystr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		mystr[i]  = str[i];
	}
	return (mystr);
}
