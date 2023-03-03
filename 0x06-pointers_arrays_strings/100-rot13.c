#include "main.h"

/**
 * rot13 - encodes Rot 13
 * @str: input string
 * Return: pointer to char
 */
char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (str[i])
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
		i++;
	}
	return (str);
}
