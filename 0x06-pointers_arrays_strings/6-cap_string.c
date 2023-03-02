#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *n)
{
	int len, i, j;
	char *c;

	c = ",;.!?\"(){} \n\t";
	len = strlen(n);
	for (i = 0; i < len; i++)
	{
		j = 0;
		while (c[j])
		{
			if (n[i - 1] == c[j] && (n[i] > 96 && n[i] < 122))
			{
				if (n[i - 1] == '\t')
					n[i - 1] = ' ';
				n[i] -= 32;
			}
			j++;
		}
	}
	return (n);
}
