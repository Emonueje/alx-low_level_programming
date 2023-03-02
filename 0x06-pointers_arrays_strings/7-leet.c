#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: input string
 * Return: returns a pointer to the string
 */
char *leet(char *str)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i, j;


	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
		i++;
	}
	return (str);
}
